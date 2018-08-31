//Exercise 11: While-Loop and Boolean Expressions

#include <stdio.h>
int main(int argc, char *argv[]){
    int i = 0;
    int num_states = 4;
    char *states[] = {
        "California", "Oregon", "Washington", "Texas" 
    };

    while(i < num_states){
        printf("state %d: %s\n", i, states[i]);
        i++;
    }

    return 0;
}