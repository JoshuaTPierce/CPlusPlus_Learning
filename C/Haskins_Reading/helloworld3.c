#include <stdio.h>

int main(int argc, char *argv[]){
    
    printf("Content-type:text/plain\n\n");
    printf("Hello, you are still learning C!!");
    printf("Number of arguments to the main function:%d\n", argc);

    for(int i = 0; i < argc; i++){
        printf("argument number %d is %s\n", i, argv[i]);
    }

    return 0;
}