//Calculates Factorials of Larger Numbers Using Verylong Class
#include "A Very Long Integer/veryLong.h"

int main(){
    insigned long numb, j;
    verylong fact = 1; //initialize verylong

    cout << "\n\nEnter number: ";
    cin >> numb; //input a long int

    for(j = numb; j > 0; j--) //factorial is numb *
        fact = fact * j; //numb-1 * numb-2 * numb-3, and so on
    cout << "Factorial is "; 
    fact.putv1(); //display factorial
    cout << endl;
    return 0;
}

/////////////////////////////////////////////////////////////////////
//In this program fact is a verylong variable. The other variables, numb and j, don’t need to be
// verylongs because they don’t get so big. To calculate the factorial of 100, for example, numb
// and j require only three digits, while fact requires 158.

//Notice how, in the expression
// fact = fact * j;
// the long variable j is automatically converted to verylong, using the one-argument constructor,
// before the multiplication is carried out.

//Here’s the output when we ask the program to find the factorial of 100:
// Enter number: 100
// Factorial is 9332621544394415268169923885626670049071596826438162
// 1468592963895217599993229915608941463976156518286253697920827223
// 758251185210916864000000000000000000000000

//Try that using type long variables! Surprisingly, the routines are fairly fast; this program executes
// in a fraction of a second. You can calculate the factorial of numbers up to about 400
// before you exceed the 1000 digit capacity of the program.