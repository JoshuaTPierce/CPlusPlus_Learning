#include <stdio.h>

/*Count characters in input, 2nd version*/

int main(){
    double nc;
    for(nc = 0; getchar() != EOF; ++nc)
        ;
    printf("%.0f\n", nc);
}

/*printf uses %ffor both float and double; %.Ofsuppresses printing of the
decimal point and the fraction part, which is zero.
The body of this for loop is empty, because all of the work is done in the
test and increment parts. But the grammatical rules of C require that a for
statement have a body. The isolated semicolon, called a null statement, is there
*/