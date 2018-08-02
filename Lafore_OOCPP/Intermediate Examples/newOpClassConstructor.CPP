//newOpClassConstructor.CPP
//Demonstrates the new and delete operators with classes and constructors.

#include <iostream>
#include <cstring>
using namespace std;

class String{  //user-defined string type
    private: 
        char* str; //pointer to string
    public:
        String(char* s) { //one argument constructor
            int length = strlen(s); //length of string argument s
            str = new char[length+1] //create new memory space
            strcpy(str, s); //copy argument s to str
            }
        -String() { //destructor
            cout << "Deleting str.\n";
            delete[] str; //release memory
            }
        void display() {
            cout << str << endl;
        }
};

int main() {
    String s1 = "Who knows nothing doubts nothing.";  //uses the one argument constructor
    cout <, "s1 = ";
    s1.display;
    return 0;
}        

//The constructor in this example takes a normal char* string as its argument. It obtains space in
//memory for this string with new; str points to the newly obtained memory. The constructor
//then uses strcpy() to copy the string into this new space.

//Destructor in NEWSTR
//We haven’t seen many destructors in our examples so far, but now that we’re allocating memory
//with new, destructors become important. If we allocate memory when we create an object,
//it’s reasonable to deallocate the memory when the object is no longer needed.

//The destructor in NEWSTR looks like this:
~String()
{
cout << “Deleting str.”;
delete[] str;
}
//This destructor gives back to the system the memory obtained when the object was created.
//You can tell from the program’s output that the destructor executed at the end of the program.
//Objects (like other variables) are typically destroyed when the function in which they were
// defined terminates. This destructor ensures that memory obtained by the String object will be
// returned to the system, and not left in limbo, when the object is destroyed.