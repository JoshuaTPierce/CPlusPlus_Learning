//veryLong.h
//Class specifier for verylong integer type.
#include <iostream>
#include <string.h> //for strlen(), etc
#include <stdlib.h> //for ltoa()
using namespace std;

const int SZ = 1000; //maximum digits in verylongs

class verylong {
    private:
        char vlstr[SZ]; //verlong number, as a string
        int vlen; //length of verylong string
        verylong multidigit(const int) const; //prototype private function
        verylong mult10(const verylong) const; //prototype private function

    public:
        verylong() : vlen(0) //no-arg constructor
            {vlstr[0] = '\0';}
        verylong(const char s[SZ]) //one-arg constructor
            {strcpy(vlstr, s); vlen = strlen(s);} //for string
        verylong(const unsigned long n) //one-arg constructor
            { //for long int
                ltoa(n, vlstr, 10); //convert to string
                strrev(vlstr); //reverse it
                vlen=strlen(vlstr); } //find length 

        void putvl() const; //display verylong
        void getvl(); //get verylong from user
        verylong operator + (const verylong); //add verylongs
        verylong operator * (const verylong); //multiply verylongs            
};

/**Explanation**/

//In addition to the data members, there are two private-member functions in class verylong.
//One multiplies a verylong number by a single digit, and the other multiplies a verylong num
// ber by 10. These routines are used internally by the multiplication routine.

//There are three constructors. One sets the verylong to 0 by inserting a terminating null at the
// beginning of the array and setting the length to 0. The second initializes it to a string (which
// in reverse order), and the third initializes it to a long int value.

//The putvl() member function displays a verylong, and getvl() gets a verylong value from
// the user. You can type as many digits as you like, up to 1,000. Note that there is no error
// checking in this routine; if you type a non-digit the results will be inaccurate.

//Two overloaded operators, + and *, perform addition and multiplication. You can use expres
// sions like
// alpha = beta * gamma + delta;
// to do verylong arithmetic.