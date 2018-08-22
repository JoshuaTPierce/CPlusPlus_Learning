#include <stdio.h>

int main(int argc, char *argv[], char *env[]){
    char c1 = 'd';
    char c2 = 'a';
    char c3 = 'v';
    char c4 = 'i';
    char c5 = 'd';
    char name[6] = ""; //initialize an empty array of chars called 6 of set length 6

    sprintf(name, "%c%c%c%c%c",c1,c2,c3,c4,c5);
    printf("%s\n",name);

    return 0;

}