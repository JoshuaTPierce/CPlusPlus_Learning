//ObjectPointers.CPP
//Demonstrates Pointers and Object Interactions

#include <iostream>
using namespace std;

class Distance {
    private: 
        int feet;
        float inches;
    public:
        void getdist(){ //get length from user
            cout << “\nEnter feet: “; cin >> feet;
            cout << “Enter inches: “; cin >> inches; }
        void showdist(){ //display distance
            cout << feet << “\’-” << inches << ‘\”’; }
};

int main(){
    Distance dist; //define a named object of Class Distance
    dist.getdist(); //access object members
    dist.showdist(); //access object members

    Distance* distptr; //POINTER TO DISTANCE OBJECTS*******
    distptr = new Distance; //points to new distance object
    distptr ->getdist(); //ACCESS OBJECT MEMBERS WITH -> OPERATOR
    distptr ->showdist();
    cout << endl;
    return 0;
}