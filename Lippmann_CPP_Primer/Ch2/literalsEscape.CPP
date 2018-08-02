// Exercise 2.8
// Using escape sequences, write a program to print 2M
// followed by a newline. Modify the program to print 2, 
// then a tab, then an M, followed by a newline.

#include <iostream>
using namespace std;

int main(){

    std::cout << "2M\n" << std::endl;
    std::cout << "2\t" << "M\n" << std::endl;

    return 0;
}

///////////////////////////////////////////////////////////
/**
Character Literals
Prefix        Meaning           Type
u           Unicode 16 char     char16_t
U           Unicode 32 char     char32_t
L           Wide Character      wchar_t
u8          utf-8 (string literals only)  char

Integer Literals
Suffix          Minimum Type
u or U          unsigned
l or L          long
ll or LL        long long

Floating-Point Literals
Suffix          Type
f or F          float
l or L          long double
**/

/** 
Escape Sequences
newline \n
horizontal tab \t
alert(bell) \a
vertical tab \b
backspace \b
double quote \"
backslash \\
question mark \?
single quote \'
carriage return \r
formfeed \f
**/