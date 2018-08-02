//A static data member is not duplicated for each object; rather a single
// data item is shared by all objects of a class. 
//Functions can be static as well. 

#include <iostream>
using namespace std;

class gamma{
    private:
        static int total; 
        int id;
    public:
        gamma() {
            total++;
            id = total; }
        ~gamma(){ //desctructor
            total --;
            cout << "Destroying ID number " << id << endl; }
        static void showtotal(){ //static function
            cout << " Total is " << total << endl; } 
        void showid(){
            cout << "ID number is " << id << endl;
        }
};

int gamma::total = 0; 

int main() {
    gamma g1;
    gamma::showtotal();

    gamma g2, g3;
    gamma::showtotal();

    g1.showid();
    g2.showid();
    g3.showid();

    cout << "----------end of program----------\n";

    return 0;
}

//In this program there is a static data member, total, in the class gamma. This data keeps track
//of how many objects of the class there are. It is incremented by the constructor and decremented by the destructor.

//Suppose we want to access total from outside the class. We construct a function,
//showtotal(), that prints the total’s value. But how do we access this function?
//When a data member is declared static, there is only one such data value for the entire class,
//no matter how many objects of the class are created. In fact, there may be no such objects at
//all, but we still want to be able to learn this fact.

//We’ve placed another function in gamma() to print out the ID number of individual members.
//This ID number is set equal to total when an object is created, so each object has a unique
//number. The showid() function prints out the ID of its object. We call it three times in main(),
//in the statements

g1.showid();
g2.showid();
g3.showid();

//As the output shows, each object has a unique number. The g1 object is numbered 1, g2 is 2,
//and g3 is 3.