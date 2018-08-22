//Verify that the expression getchar() != EOF is 0 or 1
#include <stdio.h>
int main(void){
    printf("Please enter a character:\n");
    printf("The expression \"getchar() != EOF\: is %d.\n", getchar() != EOF);
    return 0;
}

//Write a program to print the value of EOF
#include <stdio.h>
int main(void){
    printf("The value of EOF is %d.\n", EOF);
    return 0;
}
