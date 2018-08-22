#include <stdio.h>

//a more succinct version: copy input to output (version 2)

int main(){
    int c;
    while((c = getchar()) != EOF)
        putchar(c);
}

/* 
The while gets a character, assigns it to c, and then tests whether the character
was the end-of-file signal. If it was not, the body of the while is executed,
printing the character. The while then repeats. When the end of the input is
finally reached, the while terminates and so does main.
This version centralizes the input-there is now only one reference to
qetchar-and shrinks the program. The resulting program is more compact,
and, once the idiom is mastered, easier to read. You'll see this style often. (It's
possible to get carried away and create impenetrable code, however, a tendency
that we will try to curb.)
*/