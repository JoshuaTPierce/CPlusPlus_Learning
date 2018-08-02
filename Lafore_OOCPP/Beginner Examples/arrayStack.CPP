//arrayStack.cpp
//Demonstrates using a stack as a class

#include <iostream>
using namespace std;

class Stack {
    private:
        enum { MAX = 10 }; //non-standard syntax
        int st[MAX]; //defining stack as an array of integers
        int top;     //top integer in stack

    public:
        Stack() { top = 0 } //constructor
        void push(int var) {st[++top] = var; } //put number on stack
        int pop() {return st[top--];} //take number off of stack
};

int main(){
    Stack s1; //instantiate a new class

    s1.push(11); 
    s1.push(22); //push number to top of stack
    cout << "1: " << s1.pop() << endl;
    cout << "2: " << s1.pop() << endl;
    s1.push(33);
    s1.push(44);
    s1.push(55);
    s1.push(66);
    cout << “3: “ << s1.pop() << endl; //66
    cout << “4: “ << s1.pop() << endl; //55
    cout << “5: “ << s1.pop() << endl; //44
    cout << “6: “ << s1.pop() << endl; //33
    return 0;
}