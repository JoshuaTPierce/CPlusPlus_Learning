//PointersToPointers.CPP
//Demonstrates Sorting and Arrays of Pointers to Objects

#include <iostream>
#include <string> //for string class
using namespace std;

class person { //class of persons
    protected:
        string name; //person’s name
    public:
        void setName() //set the name
        { cout << “Enter name: “; cin >> name; }

        void printName() //display the name
        { cout << endl << name; }

        string getName() //return the name
        { return name; }
};

int main(){
    void bsort(person**, int); //prototype
    person* persPtr[100]; //array of pointers to persons
    int n = 0; //number of persons in array
    char choice; //input char

    do {
        persPtr[n] = new person; //make new object
        persPtr[n]->setName(); //set person's name
        n++;
        cout << "Enter another (y/n)? "; cin >> choice;
    } while (choice == 'y');

    cout << "\nUnsorted List: "; 
    for(int j = 0; j < n; j++) {
        persPtr[j]->printName(); } //print unordered list
    
    bsort(persPtr, n); //sort pointers

    cout << "\nSorted List: ";
    for(int j = 0; j < n; j++) {
        persPtr[j]->printName(); } //print ordered list
    
    cout << endl;
    return 0;
}

void bsort(person** pp, int n) { //sort pointers to persons
    void order(person**, person**); //prototype
    int j, k; //indexes to array;
    
    for(j=0; j<n-1; j++) //outer loop
        for(k=j+1; k<n; k++) //inner loop starts at outer
            order(pp+j, pp+k); //order the pointer contents
}

void order(person** pp1, person** pp2){ //orders two pointers if 1st larger than 2nd,
    if( (*pp1)->getName() > (*pp2)->getName() ) {
        person* tempptr = *pp1; //swap the pointers
        *pp1 = *pp2;
        *pp2 = tempptr;
    }
}

//You will notice that the first argument to the bsort() function, and both arguments to
//order(), have the type person**. What do the two asterisks mean? These arguments are used
//to pass the address of the array persPtr, or—in the case of order()—the addresses of elements
//of the array. If this were an array of type person, the address of the array would be type
//person*. However, the array is of type pointers to person, or person*, so its address is type
//person**. The address of a pointer is a pointer to a pointer.