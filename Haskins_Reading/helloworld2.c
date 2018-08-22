#include <stdio.h>

int main(int argc, char *argv[]){
    int i = 0;
    printf("Hello, you are learning C!");
    printf("Number of arguments to the main function:%d\n", argc);

    for(i = 0; i < argc; i++){
        printf("argument number %d is %s\n", i, argv[i]);
    }   

    return 0;
}

/* Anatomy of the program:
printf("...")
    the library function printf is called with one argument, a character
    string ending with a \n or newline char.

printf("Number of arguments to the main function:%d\n", argc);
    the library function printf is called with two arguments, a char
    string ending with a newline that includes %d as a placeholder
    for the second argument argc, which is an int

for(i = 0; i < argc; i++)
    a for loop which repeatedly uses a counter integer to iterate
    through the list of arguments so long as i is less than the value
    of argc

printf("argument number %d is %s\n", i, argv[i]);
    the library function printf is called with three arguments, a char
    string ending with a newline, %d as the placeholder for the second
    argument argc which is an int, and %s, which is a placeholder for the
    third argument argv[i], the i-th member of the array of pointers to
    character strings called argv[]

EXAMPLE: CALLING THE FUNCTION WITH A STRING ARGUMENT FROM TERMINAL:
./a.out my name is josh
Hello, you are learning C!Number of arguments to the main function:5
argument number 0 is ./a.out
argument number 1 is my
argument number 2 is name
argument number 3 is is
argument number 4 is josh


*/


    