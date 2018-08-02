//showPrimes.CPP
//Displays prime number distribution graphically.
//Also demonstrates BREAK statement

#include <iostream>
using namespace std;
#include <conio.h>

int main(){
    const unsigned char WHITE = 219; //solid color (primes)
    const unsigned char GRAY = 176; //gray (non-primes)
    unsigned char ch;

    for(int count = 0; count < 80*25-1; count++){
        ch = WHITE;

        for(int j = 2; j < count; j++)
            if(count % j == 0){
                ch = GRAY;
                break;
            }
        cout << ch;    
        }
    getch();
    return 0;
}
