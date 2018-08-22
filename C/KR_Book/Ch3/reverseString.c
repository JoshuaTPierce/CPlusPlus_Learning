#include <string.h>
#include <stdio.h>

/* reverse: reverse string s in place */
void reverse(char s[]){
    int c, i, j;
    for(i = 0, j = strlen(s)-1; i < j; i++, j--){
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}

int main(void){
    int c, d;
    d = 0;
    char s[256];
    
    printf("Enter a string of characters (256 max) and then press Ctrl + D.\n");
    while((c = getchar()) != EOF){
        s[d] = c;
        c++;
        d++;
    }
    reverse(s);
    
    //prints the ASCII number version of the string:
    for(int e = 0; e < strlen(s); e++)
        printf("%d ", s[e]);
}