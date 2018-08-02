/*
A continue statement terminates the current iteration of the nearest enclosing loop
and immediately begins the next iteration. A continue can appear only inside a for,
while, or do while loop, including inside statements or blocks nested inside such
loops. Like the break statement, a continue inside a nested loop affects only the
nearest enclosing loop. Unlike a break, a continue may appear inside a switch
only if that switch is embedded inside an iterative statement.

A continue interrupts the current iteration; execution stays inside the loop. In the
case of a while or a do while, execution continues by evaluating the condition. In
a traditional for loop, execution continues at the expression inside the for header. In
a range for, execution continues by initializing the control variable from the next
element in the sequence.
*/

//For example, the following loop reads thes tandard input one word at a time. Only words
//that begin with an underscore will be processed. For any other value, we terminate the
//current input and get the next input:

#include <string>
#include <iostream>
using namespace std;

void ex1(){
    string buf;
    while(cin >> buf && !buf.empty()){
        if(buf[0] != '_')
            continue; //go on to next input
        //***process buf because it starts with underscore***//
    }
}

int main(){
    ex1();
    return 0;
}