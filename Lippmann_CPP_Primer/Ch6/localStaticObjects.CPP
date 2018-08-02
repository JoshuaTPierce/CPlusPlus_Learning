/*
It can be useful to have a local variable whose lifetime continues across calls to the
function. We obtain such objects by defining a local variable as static. Each local
static object is initialized before the first time execution passes through the object’s
definition. Local statics are not destroyed when a function ends; they are destroyed
when the program terminates.
*/

//As a trivial example, here is a function that counts how many times it is called:

#include <iostream>
using namespace std;

size_t count_calls(){
    static size_t ctr = 0; //value will persist across function calls
    return ++ctr;
}

int main(){
    for(size_t i = 0; i != 10; i++)
        cout << count_calls() << endl;
    return 0;
}

/*
This program will print the numbers from 1 through 10 inclusive.
Before control flows through the definition of ctr for the first time, ctr is created
and given an initial value of 0. Each call increments ctr and returns its new value.
Whenever count_calls is executed, the variable ctr already exists and has
whatever value was in that variable the last time the function exited. Thus, on the
second invocation, the value of ctr is 1, on the third it is 2, and so on.

If a local static has no explicit initializer, it is value initialized (§ 3.3.1, p. 98),
meaning that local statics of built-in type are initialized to zero.
*/