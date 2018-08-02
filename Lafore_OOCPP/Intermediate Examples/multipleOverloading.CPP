//multipleOverloading.CPP
//Overloaded < operator compares distances and demonstrates multiple overloading.

#include <iostream>
using namespace std;

class Distance {
    private:
        int feet;
        float inches;
    
    public:
        Distance() : feet(0), inches(0) {} //No-argument constructor
        Distance(int ft, float in) : feet(ft), inches(in) {} //two-argument constructor
        void getdist(){ //get distance from user
            cout << “\nEnter feet: “; cin >> feet;
            cout << “Enter inches: “; cin >> inches;
                }
        void showdist() const { //display distance
            cout << feet << “\’-” << inches << ‘\”’; 
                }
        bool operator < (Distance) const; //compare distances
                }
};
//Compare This Distance with D2:
bool Distance::operator < (Distance d2) const { //return the sum
    float bf1 = feet + inches/12;
    float b2 = d2.feet + d2.inches/12;
    return (bf1 < bf2) ? true : false; //ternary operator
}

int main() {
    Distance dist1; //define Distance dist1
    dist1.getdist(); //get dist1 from user
    
    Distance dist2(6, 2.5); //define and initialize dist2

    //display distances
    cout << “\ndist1 = “; dist1.showdist();
    cout << “\ndist2 = “; dist2.showdist();
    if( dist1 < dist2 ){ //overloaded ‘<’ operator
        cout << “\ndist1 is less than dist2”;}
    else{
    cout << “\ndist1 is greater than (or equal to) dist2”;
    cout << endl;}

    return 0;
}