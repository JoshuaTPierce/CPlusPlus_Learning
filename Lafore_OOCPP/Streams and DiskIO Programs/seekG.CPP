//SeekG.CPP
//Seeks for a particular pointer (to object) in a file.

#include <fstream> //for file streams
#include <iostream>
using namespace std;

class person {
    protected:
        char name[80]; //person’s name
        int age; //person’s age
    public:
    void getData() {
    cout << "\n Enter name: "; cin >> name;
    cout << " Enter age: "; cin >> age; }
    
    void showData(void) {
        cout << "\n Name: " << name;
        cout << "\n Age: " << age; }
};

int main(){
    person pers; //person obj
    ifstream infile; //input file
    infile.open("GROUP.DAT", ios::in | ios::binary); //open file

    infile.seekg(0, ios::end); //go to zero bytes from end
    int endposition = infile.tellg(); //find where we are
    int n = endposition / sizeof(person); //number of persons
    cout << "\There are " << n << " persons in file";

    cout << "\nEnter person number: ";
    cin >> n;
    int position = (n - 1) * sizeof(person); //number times size
    infile.seekg(position); //bytes from start

    //read one person
    infile.read(reinterpret_cast<char*>(&pers), sizeof(pers));
    pers.showData();
    cout << endl;
    
    return 0;
}