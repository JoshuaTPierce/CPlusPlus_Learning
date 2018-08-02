//StarLine.CPP
//Demonstrates a Simple User-Defined Function

#include <iostream>
using namespace std;

void starline(); //function definition (prototype)

//-----------------------------------------------------
int main(){
    starline(); //call to function
    cout << " Data type   Range" << endl;
    
    starline();
    cout << "char       -129 to 127" << endl
         << "short      -32768 to 32767" << endl
         << "int         System-Dependent" << endl;

    starline();
    return 0;
}

//-------------------------------------------------------
//starline() 
//function definition

void starline(){
    for(int j = 0; j < 45; j++)
        cout << '*';
    cout << endl;
}

//--------------------------------------------------------
/* Explanation:
void starline(); tells the compiler that at some later point we will present a function
called starline. This is also called a prototype and is a complete statement.
The keyword VOID specifies that the function has no return value.

The function is CALLED (or invoked, or executed) three times from main(). 
Each of the three calls looks like starline();
Executing the call statement causes the function to execute. That is, control is
transferred to the function, the statements in the function's definition are executed,
and the control returns to the statement.

The order of execution goes
starline() -> PRINT 45 STARS
execute the first cout
starline() -> PRINT 45 STARS
execute the second cout
starline() -> print 45 STARS
end.

*/