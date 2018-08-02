//ArrayOfObjectPointers.CPP

#include <iostream>
using namespace std;

class Person {
    protected:
        char name[40]; 
    public: 
        void setName() {
            cout << "Etner name: ";
            cin >> name; }
        void printName(){
            cout << "\n Name is: " << name; }
};

int main(){
    person* persPtr[100]; //array of pointers to persons
    int n = 0; //number of persons in array
    char choice;

    do {
        persPtr[n] = new person; //make new object
        persPtr[n]->setName(); //set persons name
        n++; //count new person
        cout << "Enter another (y/n)? ";
        cin >> choice;
    } while(choice=='y');

    for(int j = 0; j < n; j++){
        cout << “\nPerson number “ << j+1;
        persPtr[j]->printName(); }
        
        cout << endl;

        return 0;
} //end main()
