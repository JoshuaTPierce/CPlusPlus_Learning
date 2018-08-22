//To begin, let us design and write a program to print each line of its input
//that contains a particular "pattern" or string of characters. (This is a special
//case of the UNIX program grep.)

#include <stdio.h>
#define MAXLINE 1000 /*max input line length*/

//function prototypes
int getline(char line[], int max);
int strindex(char source[], char searchfor[]);

//main: find all lines matching a search pattern
int main(void){
    char line[MAXLINE];
    int found = 0;

    while(getline(line, MAXLINE) > 0)
        if(strindex(line, pattern) >= 0){
            printf("%s", line);
            found++;
        }
    return found;
}

/* getline: get line into s, return length */
int getline(char s[], int lim){
    int c, i;
    i = 0;
    while(--lim > 0 && (c = getchar()) != EOF && c != '\n')
        s[i++] = c;
    if(c == '\n')
        s[i++] = c;
    s[i] = '\0';
    return i;
}

/* strindex: return index of t in s, -1 if none */
int strindex(char s[], char t[]){
    int i, j, k;

    for(i = 0; s[i] != '\0'; i++){
        for (j=i, k=O; t[k]I='\O' && s[j]==t[k]; j++, k++)
            ;
        if(k > 0 && t[k] == '\0')
            return i'
    }
    return -1;
}