//When you call a member function, it comes into existence with the value of this set to the
//address of the object for which it was called. The this pointer can be treated like any other
//pointer to an object, and can thus be used to access the data in the object it points to, as shown
//in the DOTHIS program:

#include <iostream>
using namespace std;

class what {
    private:
        int alpha;
    public:
        void tester() {
            this->alpha = 11; //same as alpha = 11;
            cout << this->alpha; //same as cout << alpha;
        }
};

int main() {
    what w;
    w.tester();
    
    cout << endl;
    return 0;
}

//This program simply prints out the value 11. Notice that the tester() member function
//accesses the variable alpha as
this->alpha
//This is exactly the same as referring to alpha directly. This syntax works, but there is no rea
//son for it except to show that this does indeed point to the object.