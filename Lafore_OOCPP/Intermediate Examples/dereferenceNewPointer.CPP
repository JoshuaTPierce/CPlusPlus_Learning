//deReferenceNewPointer.CPP
//Demonstrates deferencing of a pointer returned by the new operator

#include <iostream>
using namespace std;

class Distance {// English Distance class
    private:
        int feet;
        float inches;
    public:
        void getdist() // get length from user
            {
                cout << “\nEnter feet: “; cin >> feet;
                cout << “Enter inches: “; cin >> inches;
            }
        void showdist() // display distance
            { cout << feet << “\’-” << inches << ‘\”’; }
};

int main() {
    Distance& dist = *(new Distance); //create Distance object, alias is "dist"
    dist.getdist();
    dist.showdist();
    cout << endl;
    return 0;
}

//The expression
new Distance
//returns a pointer to a memory area large enough for a Distance object, so we can refer to the
//original object as
*(new Distance)

//This is the object pointed to by the pointer. Using a reference, we define dist to be an object
//of type Distance, and we set it equal to *(new Distance). Now we can refer to members of
//dist using the dot membership operator, rather than ->.