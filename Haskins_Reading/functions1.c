#include <stdio.h>
#include <string.h>
#include <math.h>

double doit(int number1, int number2){ 
    //return type double, name doit, signature takes two ints (called number1, number2)
    return sqrt((double)(number1 + number2));
    //instructs the function to return the result of calling the 
    //math.h function sqrt on number1 + number2, where adding
    //(double) in the function call indicates a type conversion,
    //where number 1 + number 2 is converted to a double before
    //sqrt is called.
}

int main(int argc, char *[argv], char *env[]){
    int n1 = 0, n2 = 0; 
    n1 = atoi((char *) strtok(argv[1],":"));
    n2 = atoi((char *) strtok(NULL,":"));
    printf("Content-type:text/html\n\n<html><body>\n");
    for(int i = 1; i <= 100; i++){
        printf("%f", doit(n1 + i, n2 * i);
        printf("</body></html>\n");
    }

    return 0;
}