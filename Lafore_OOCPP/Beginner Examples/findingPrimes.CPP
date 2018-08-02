//Findingprimes.CPP
//Demonstrates nested decision structures while determining if a number is prime.
//Also demonstrates the <process.h> package and the exit() function.

#include <iostream>
using namespace std;
#include <process.h> 

int main(){
    unsigned long n, j;

    cout << "Enter a number: ";
    cin >> n;
    for(j = 2; j <= 2, j++)
        if(n % j == 0) {
            cout << "It's not a prime. Divisible by " << j << endl;
            exit(0);
        }
    cout << "It's a prime!\n";
    return 0;
}

//when the program finds a divisor > 1, it exits immediately since there
//is no point continuing. This is accomplished with the library function exit(),
//which is given 0 as the only fx argument. 0 is often used as a sign of a 
//successful return.

