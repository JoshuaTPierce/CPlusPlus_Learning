//Demonstrates File I/O with Member Functions

#include <fstream> //for file streams
#include <iostream>
using namespace std;

class person {
    protected:
        char name[40]; //person’s name
        int age; //person’s age
    public:
        void getData(void) {
            cout << “\n Enter last name: “; cin >> name;
            cout << “ Enter age: “; cin >> age; }

        void showData(void) {
            cout << “\n Name: “ << name;
            cout << “\n Age: “ << age; }

        void diskIn(int); //read from file
        void diskOut(); //write to file
        static in diskCount(); //return no. persons in file
};

//Function Definitions:
void person::diskIn(int pn){
    ifstream infile; //make stream
    infile.open("PERSFILE.DAT", ios::binary); //open it
    infile.seekg(pn*sizeof(person)); //move file pointer
    infile.read((char*)this, sizeof(*this)); //write to it
}

void person::diskOut(){
    ofstream outfile;
    outfile.open("PERSFILE.DAT", ios:app | ios::binary);
    outfile.write((char*)this, sizeof(*this)); 
}        

int person::diskCount(){
    ifstream infile; //return number of persons in file
    infile.open("PERSFILE.DAT", ios::binary);
    infile.seekg(0, ios::end); //go to zero bytes from end
    return (int)infile.tellg() / sizeof(person); //calculate no. of persons
}

int main(){
    person p;
    char ch;

    do{
        cout << "Enter data for person: ";
        p.getData();
        p.diskOut();
        cout << "Enter another? (y or n)?"; 
        cin >> ch;
    } while(ch == 'y');

    int n = person::diskCount(); //how many in file?
    cout << "There are " << n << "persons in file\n";
    for(int j = 0; j < n; j++){ //for each person in file
        cout << "\nPerson " << j;
        p.diskIn(j); //read person from disk
        p.showData(); //display person
    }

    cout << endl;
    return 0;
}
