//Exercise 2·3. Write the function htoi (s ), which converts a string of hexadecimal
//digits (including an optional Ox or ox) into its equivalent integer value.
//The allowable digits are 0 through 9, a through f, and A through F.

#include <stdio.h>

#define MAXLINE 1000

int get_line(char line[], int maxline);
unsigned long htoi(char s[]);

int main(void){
    int len;
    char lin[MAXLINE];

    while((len = get_line(line, MAXLINE)) > 0)
        printf("%lu\n", htoi(line));

    return 0;
}

int get_line(char s[], int lim){
    int c, i, l;
    for(i = 0, l = 0; (c = getchar()) != EOF && c != '\n'; ++i)
        if(i < lim - 1)
            s[l++] = c;
}