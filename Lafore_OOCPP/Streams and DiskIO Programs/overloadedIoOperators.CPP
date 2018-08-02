//Demonstrates Overloaded Extraction and Insertion Operators

//This is a powerful feature of C++. It lets you treat I/O for user-defined data types in the
//same way as basic types like int and double. For example, if you have an object of class
//crawdad called cd1, you can display it with the statement
//cout << “\ncd1=” << cd1;
//just as if it were a basic data type.
//We can overload the extraction and insertion operators so they work with the display and keyboard
//(cout and cin) alone. With a little more care, we can also overload them so they work
//with disk files. We’ll look at examples of both of these situations.

#include <iostream>
using namespace std;

class Distance {
    private:
        int feet;
        float inches;
    public:
        Distance() : feet(0), inches(0.0) //constructor (no args)
            { }

    //constructor (two args)
        Distance(int ft, float in) : feet(ft), inches(in)
            { }
        
        friend istream& operator >> (istream& s, Distance& d);
        
        friend ostream& operator << (ostream& s, Distance& d);
};

istream& operator >> (istream& s, Distance& d) { //get distance from user
    cout << "\nEnter feet: "; s >> d.feet; //using
    cout << "Enter inches: "; s >> d.inches; //overloaded

    return s; //>> operator
}

ostream& operator << (ostream& s, Distance& d) { // display distance
    s << d.feet << "\'-" << d.inches << '\"'; //using
    return s; //overloaded
}               // << operator

int main() {
    Distance dist1, dist2; //define Distances
    Distance dist3(11, 6.25); //define, initialize dist3
    
    cout << "\nEnter two Distance values:";
    cin >> dist1 >> dist2; //get values from user

    //display distances
    cout << "\ndist1 = " << dist1 << "\ndist2 = " << dist2;
    cout << "\ndist3 = " << dist3 << endl;

    return 0;
}