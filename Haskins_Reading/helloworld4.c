/*
A seldom-doucmented feature of the function signature for "main" is that
it can take a third argument: char *env[], which is also a list of pointers
to strings, but in this case, to system environment variables, which are
available to the program at the time it is run. 
*/

#include <stdio.h>

int main(int argc, char *argv[], char *env[]){
    printf("Content-type:text/plain\n\n");
    printf("Number of argument in main function:%d\n", argc);
    for(int i = 0; i < argc; i++){
        printf("argument number %d is %s\n", i, argv[i]);
    }
    
    int k = 0;
    printf("Environment variables:");
    while(env[k]){
        printf("env[%d] = %s\n", k, env[k]);
        k++;
    }

    return 0;
}