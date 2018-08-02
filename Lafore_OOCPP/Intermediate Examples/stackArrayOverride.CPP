//StackArrayOverride.CPP
//Demonstrates Overriding Base Class Functions with the Stack Array Program

#include <iostream>
#include <process.h>
using namespace std;

class Stack {
    protected:
        enum { MAX = 3};
        int st[MAX]; //array of integers
        int top;
    public:
        Stack() { top = -1 } //constructor
        void push(int var)
            {st[++top] = var;} //put number on stack
        int pop()
            {return st[top--];} //take number off stack
};

class Stack2 : public Stack {
    void push(int var) {
        if (top >= MAX - 1)
            {cout << "\nError: stack is full. "; exit(1);}
        Stack::push(var); //call push() in stack class
            }

        int pop() {
            if(top < 0) {
                cout << "\nError: stack is empty.\n"; exit(1);
            }
        return Stack::pop(); //SCOPE RESOLUTION OPERATOR INSTRUCTS COMPILER TO CALL FN FROM BASE CLASS
        }
};

int main(){
    Stack2 s1;

    s1.push(11);
    s1.push(22);
    s1.push(33);

    cout << endl << s1.pop(); //pop some values from stack
    cout << endl << s1.pop();
    cout << endl << s1.pop();
    cout << endl << s1.pop();
    cout << endl;
    return 0;
}