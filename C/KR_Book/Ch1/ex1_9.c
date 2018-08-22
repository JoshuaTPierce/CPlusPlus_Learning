//Exercise 1-9. Write a program to copy its input to its output, replacing each
//string of one or more blanks by a single blank.

#include <stdio.h>

int main(void){
    int c, blank_received;
    blank_received = 0;
    printf("Input some characters, then press Ctrl+D.\n");
    while((c = getchar()) != EOF)
        if(c == ' '){
            if(!blank_received){
                blank_received = 1;
                putchar(c);
            }
        } else {
            blank_received = 0;
            putchar(c);
        }

        return 0;
}