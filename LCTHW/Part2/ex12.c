//Exercise 12: If, Else-If, Else

#include <stdio.h>
int main(int argc, char *argv[]){
    int i = 0;
    if(argc == 1){
        printf("You only have one argument.\n");
    } else if(argc > 1 && argc < 4){
        printf("Here's your arguments:\n");
        for(i = 0; i < argc; i++){
            printf("%s ", argv[i]);
        }
        printf("\n");
    } else {
        printf("You have too many arguments.\n");
    }

    return 0;
}

/* PASSING ARGUMENTS IN THE CONSOLE
$ make ex12
cc -Wall -g ex12.c -o ex12
$ ./ex12
You only have one argument. You suck.
$ ./ex12 one
Here's your arguments:
./ex12 one
$ ./ex12 one two
Here's your arguments:
./ex12 one two
$ ./ex12 one two three
You have too many arguments. You suck.
$
*/