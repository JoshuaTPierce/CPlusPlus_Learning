//LinkedListPointers.CPP
//Demonstrates Pointers Using a Linked List Data Structure

//The linked list provides a more flexible storage system in that it doesn’t use arrays at all.
//Instead, space for each data item is obtained as needed with new, and each item is connected,
//or linked, to the next data item using a pointer. The individual items don’t need to be located
//contiguously in memory the way array elements are; they can be scattered anywhere.

//In our example the entire linked list is an object of class linklist. The individual data items,
//or links, are represented by structures of type link. Each such structure contains an integer—
//representing the object’s single data item—and a pointer to the next link. The list itself stores a
//pointer to the link at the head of the list.

#include <iostream>
using namespace std;

struct link { //one element of the list
    int data; //data item
    link* next; //pointer to next link
};

class linklist {  //a list of links
    private:
        link* first; //pointer to first link
    public:
        linklist() {first = NULL} //no-argument constructor, no first link
        void additem(int d); //add data item (one link)
        void display(); //display all links
};

void linklist::additem(int d) {
    link* newlink = new link; //make a new link
    newlink->data = d; //access struct using ->
    newlink->next = first; //point to next link
    first = newlink; //now first points to this
}

void linklist::display(){
    link* current = first; //set pointer to first link
    while(current != NULL) {
        cout << current->data << endl; //print data
        current = current->next; //move to next link
    }
}

int main(){
    linklist li; //create object of class linklist

    li.additem(25);
    li.additem(26);
    li.additem(49);
    li.additem(64);

    li.display(); //display entire list
    
    return 0;
}

//The linklist class has only one member data item: the pointer to the start of the list. When
//the list is first created, the constructor initializes this pointer, which is called first, to NULL.
//The NULL constant is defined to be 0. This value serves as a signal that a pointer does not hold
//a valid address. In our program a link whose next member has a value of NULL is assumed to
//be at the end of the list.