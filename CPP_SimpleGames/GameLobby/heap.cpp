/*						Dynamically Allocating Memory
So far, whenever you’ve declared a variable, C++ has allocated the necessary
memory for it. When the function that the variable was created in ended, C++
freed the memory. This memory, which is used for local variables, is called the
stack. But there’s another kind of memory that persists independent of the
functions in a program. You, the programmer, are in charge of allocating and
freeing this memory, collectively called the heap (or free store).

At this point, you might be thinking, “Why bother with another type of
memory? The stack works just fine, thank you.” Using the dynamic memory
of the heap offers great benefits that can be summed up in one word: efficiency.
By using the heap, you can use only the amount of memory you need at any
given time. If you have a game with a level that has 100 enemies, you can allocate
the memory for the enemies at the beginning of the level and free the memory at
the end. The heap also allows you to create an object in one function that you
can access even after that function ends (without having to return a copy of the
object). You might create a screen object in one function and return access to it.
You’ll find that dynamic memory is an important tool in writing any significant
game. 

Introducing the Heap Program
The Heap program demonstrates dynamic memory. The program dynamically
allocates memory on the heap for an integer variable, assigns it a value, and then
displays it. Next, the program calls a function that dynamically allocates memory
on the heap for another integer variable, assigns it a value, and returns a pointer
to it. The program takes the returned pointer, uses it to display the value, and
then frees the allocated memory on the heap. Finally, the program contains two
functions that demonstrate the misuse of dynamic memory. I don’t call these
functions, but I use them to illustrate what not to do with dynamic memory. */


#include <iostream>
using namespace std;

int* intOnHeap(); //returns an int on the heap
void leak1(); //creates memory leak
void leak2(); //creates another memory leak

int main(){
	int* pHeap = new int;
	*pHeap = 10; 
	cout << "*pHeap: " << *pHeap << endl;

	int* pHeap2 = intOnHeap();
	cout << "*pHeap2: " << endl;

	cout << "Freeing memory pointed to by pHeap.\n\n";
	delete pHeap;

	cout << "Freeing memory pointed to by pHeap2.\n\n";
	delete pHeap2;

	//get rid of dangling pointers
	pHeap = 0;
	pHeap2 = 0;

	return 0;

}

int* intOnHeap(){
	int* pTemp = new int(20);
	return pTemp;
}

void leak1(){
	int* drip1 = new int(30);
}

void leak2(){
	int* drip2 = new int(50);
	drip2 = new int(100);
	delete drip2;
}

//--------------------------Notes------------------------
/*					Using the new Operator
The new operator allocates memory on the heap and returns its address. You use
new followed by the type of value you want to reserve space for. That’s what I do
in the first line of main().
int* pHeap = new int;

The new int part of the statement allocates enough memory on the heap for one
int and returns the address on the heap for that chunk of memory. The other
part of the statement, int* pHeap, declares a local pointer, pHeap, which points to
the newly allocated chunk of memory on the heap.

By using pHeap, I can manipulate the chunk of memory on the heap reserved for
an integer. That’s what I do next; I assign 10 to the chunk of memory and then I
display that value stored on the heap, using pHeap, as I would any other pointer
to int. The only difference is that pHeap points to a piece of memory on the
heap, not the stack.

One of the major advantages of memory on the heap is that it can persist beyond
the function in which it was allocated, meaning that you can create an object on
the heap in one function and return a pointer or reference to it. That’s what I
demonstrate with the following line:
int* pHeap2 = intOnHeap();

The statement calls the function intOnHeap(), which allocates a chunk of
memory on the heap for an int and assigns 20 to it.

int* intOnHeap()
{
int* pTemp = new int(20);
return pTemp;
}

Then, the function returns a pointer to this chunk of memory. Back in main(),
the assignment statement assigns the address of the chunk of memory on the
heap to pHeap2. Next, I use the returned pointer to display the value.
cout << "*pHeap2: " << *pHeap2 << "\n\n";

				Using the delete Operator
Unlike storage for local variables on the stack, memory that you’ve allocated on
the heap must be explicitly freed. When you’re finished with memory that
you’ve allocated with new, you should free it with delete. That’s what I do with
the following line, which frees the memory on the heap that stored 10.
delete pHeap;

That memory is returned to the heap for future use. The data that was stored in
it is no longer available. Next, I free some more memory, which frees the
memory on the heap that stored 20.
delete pHeap2;

That memory is returned to the heap for future use, and the data that was stored
in it is no longer available. Notice that there’s no difference, as far as delete is
concerned, regarding where in the program I allocated the memory on the heap
that I’m deleting.

Avoiding Memory Leaks
One problem with allowing a programmer to allocate and free memory is that he
might allocate memory and lose any way to get at it, thus losing any way to ever
free it. When memory is lost like this, it’s called a memory leak. Given a large
enough leak, a program might run out of memory and crash. As a game
programmer, it’s your responsibility to avoid memory leaks.
I’ve written two functions in the Heap program that purposely create memory
leaks in order to show you what not to do when using dynamic memory. The
first function is leak1(), which simply allocates a chunk of memory on the heap
for an int value and then ends.
void leak1()
{
int* drip1 = new int(30);
}

If I were to call this function, memory would be lost forever. (Okay, it would be
lost until the program ended.) The problem is that drip1, which is the only
connection to the newly acquired chunk of memory on the heap, is a local
variable and ceases to exist when the function leak1() ends. So, there’s no way
to free the allocated memory. Take a look at Figure 9.4 for a visual representa-
tion of how the leak occurs.

To avoid this memory leak, I could do one of two things. I could use deletefree the memory in leak1(), or I could return a copy of the pointer drip1. Ifchoose the second option, I have to make sure to free this memory in some other
part of the program.
to
I
The second function that creates a memory leak is leak2().
void leak2()
{
int* drip2 = new int(50);
drip2 = new int(100);
delete drip2;
}
This memory leak is a little more subtle, but there is still a leak. The first line in
the function body, int* drip2 = new int(50);, allocates a new piece of memory
on the heap, assigns 50 to it, and has drip2 point to that piece memory. So far, so
good. The second line, drip2 = new int(100);, points drip2 to a new piece of
memory on the heap, which stores the 100. The problem is that the memory on
the heap that stores 50 now has nothing pointing to it, so there is no way for the
program to free that memory. As a result, that piece of memory has essentially
leaked out of the system. Check out Figure 9.5 for a visual representation of how
the leak occurs.
The last statement of the function, delete drip2;, frees the memory that stores
100,
 so this won’t be the source of another memory leak. But remember, the
memory on the heap that stores 50 has still leaked out of the system. Also, I
don’t worry about drip2, which technically has become a dangling pointer,
because it will cease to exist when the function ends.
