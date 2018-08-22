//Exercise 1.8. Write a program to count blanks, tabs, and newlines.

#include <stdio.h>

int main(void){
    int c, b1, t1, n1;
    b1 = 0;
    t1 = 0;
    n1 = 0;

    printf("Input some characters and then press Ctrl+D.\n");
    while((c = getchar()) != EOF)
        if (c == ' ')
            ++b1;
        else if(c == '\t')
            ++t1;
        else if(c == '\n')
            ++n1;

    printf("Count of blanks is %d, count of tabs is %d, count of newlines is %d.\n", bl, tl, nl);

    return 0;
    
}