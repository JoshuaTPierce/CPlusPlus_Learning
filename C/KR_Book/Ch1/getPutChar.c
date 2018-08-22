/*The standard library provides several functions for reading or writing one
character at a time, of which getchar and putchar are the simplest. Each
time it is called, getchar reads the next input character from a text stream
and returns that as its value. That is, after
c = getchar ()
the variable c contains the next character of input. The characters normally
come from the keyboard; input from files is discussed in Chapter 7.
The function putchar prints a character each time it is called:
putchar(c)
prints the contents of the integer variable c as a character, usually on the
screen. Calls to putchar and printf may be interleaved; the output will
appear in the order in which the calls are made. */

#include <stdio.h>

//read string input, copy input to output; 1st version
int main(){
    int c;
    while(c != EOF){
        putchar(c);
        c = getchar();
    }
    return 0;
}