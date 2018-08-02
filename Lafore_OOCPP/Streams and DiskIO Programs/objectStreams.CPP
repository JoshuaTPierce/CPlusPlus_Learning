//Writes an object to disk.

#include <fstream>
#include <iostream>
using namespace std;

class person {
    protected:
        char name[80]; 
        short age;
    public:
        void getData(){ //get person's data
        cout << "Enter name: "; cin >> name;
        cout << "Enter age: "; cin >> age; }
};

int main(){
    person pers; //create a person object
    pers.getData();
    ofstream outfile("PERSON.DAT", ios::binary); 
    outfile.write(reinterpret_cast<char*>(&pers), sizeof(pers));
    return 0;
}

//The getData() member function of person is called to prompt the user for information, which
//it places in the pers object. Here’s some sample interaction:
//Enter name: Coleridge
//Enter age: 62
//The contents of the pers object are then written to disk, using the write() function. We use
//the sizeof operator to find the length of the pers object.

//READ OBJECT FROM DISK:

#include <fstream> //for file streams
#include <iostream>
using namespace std;

class person {
    protected:
        char name[80]; //person’s name
        short age; //person’s age
    public:
        void showData() {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl; }
};

int main() {
    person pers; //create person variable
    ifstream infile(“PERSON.DAT”, ios::binary); //create stream
    //read stream
    infile.read( reinterpret_cast<char*>(&pers), sizeof(pers) );
    pers.showData(); //display person

    return 0;
}