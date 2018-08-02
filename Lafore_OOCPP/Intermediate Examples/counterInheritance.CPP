//CounterInheritance.CPP
//Demonstrates Inheritance Using the Counter Class

#include <iostream>
using namespace std;

class Counter{
    protected: //note: NOT the same as private
        unsigned int count;
    public:
        Counter() : count(0){} //zero arg constructor initialized to zero
        Counter(int c) : count(c) {} //one arg constructor initialized to take an argument, c
        unsigned int get_count() const {
            return count++ } //prototype of "get count" function
        Counter operator ++ () {
            return Counter(++count); } //incr count (prefix)
}; 

class CountDn : public Counter //derive class
{
    public:
        Counter operator -- () {
            return Counter(--count); }
};

int main(){
    CountDn c1;  //instantiate CountDn 
    //will have all the features of Counter plus the new
    //function defined in CountDn

    cout << "\nc1 =" << c1.get_count();

    ++c1; ++c1; ++c1; //increment c1, 3 times
    cout << "\nc1 =" << c1.get_count();

    --c1; --c1; //decrement c1, twice
    cout << "\nc1" << c1.get_count();
    cout << endl;
    return 0;
}          