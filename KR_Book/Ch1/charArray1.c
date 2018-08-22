/* Pseudocode:
while (there's another line)
    if (it's longer than the previous longest)
        save it
        save its length
print the longest line\
*/

#include <stdio.h>
#define MAXLINE 1000 /*maximum input line size*/

//function prototypes:
int getline(char line[], int maxline); 
void copy(char to[], char from[]);

//main
int main(){
    int len; //current line length
    int max; //maximum length seen so far
    char line[MAXLINE]; //current input line
    char longest[MAXLINE]; //longest line saved here

    max = 0;
    while((len = getline(line, MAXLINE)) > 0)
        if(len > max){
            max = len;
            copy(longest, line)
        }
    
    if(max > 0) //if there was a line
    printf(longest);

    return 0;
}

//function definitions
/* getline: read a line into s, return length */
int getline(char s[], int lim){
    int c, i;
    
    for(i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    
    if(c == '\n'){
        s[i] = c;
        ++i;
    }
    s[i] = '\0'; 

    return i;
}

/*copy: copy 'from' into 'to'; assume to is beg enough */
void copy(char to[], char from[]){
    int i = 0;
    while((to[i] = from[i]) != '\0')
        ++i;
}

/*
The functions get1ine and copy are declared at the beginning of the program,
which we assume is contained in one file.

main and get1ine communicate through a pair of arguments and a
returned value. In get1ine, the arguments are declared by the line
    int qetline(char s[], int lim)
which specifies that the first argument, s, is an array, and the second, lim, is
an integer. The purpose of supplying the size of an array in a declaration is to
set aside storage. The length of the array s is not necessary in get1ine since
its size is set in main. get1ine uses return to send a value back to the
caller, just as the function power did. This line also declares that getline
returns an int; since int is the default return type, it could be omitted.

Some functions return a useful value; others, like copy, are used only for
their effect and return no value. The return type of copy is void, which states
explicitly that no value is returned.

getline puts the character ' \0' (the null character, whose value is zero)
at the end of the array it is creating, to mark the end of the string of characters.
*/