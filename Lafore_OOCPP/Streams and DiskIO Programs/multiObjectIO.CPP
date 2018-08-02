//Reads and Writes Several Objects To/From Disk

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

        void showData(){
            cout << "\n Name: " << name;
            cout << "\n Age: " << name; }
};

int main(){
    char ch;
    person pers; //create person object
    fstream file; //creatio IO fine

    //open file
    file.open("GROUP.DAT", ios::app | ios::out | ios::in | ios::binary);

    do{
        cout << "\nEnter person's data:";
        pers.getData(); //get data and write to file
        file.write(reinterpret_cast<char*>(&pers), sizeof(pers));
        cout << "Enter another person (y or n) ? ";
        cin >> ch;
    } while(ch == 'y');

    file.seekg(0); //reset to start of file
    file.read(reinterpret_cast<char*>(&pers), sizeof(pers));

    while(!file.eof()) { //quit of EOF
        cout << "\nPerson: ";
        pers.showData();
        file.read(reinterpret_cast<char*>(&pers), sizeof(pers)); }

        cout << endl;
        return 0;
}