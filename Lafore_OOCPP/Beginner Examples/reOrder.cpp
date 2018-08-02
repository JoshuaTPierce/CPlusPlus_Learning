//reOrder.CPP
//Orders two arguments passed by reference.

#include <iostream>
using namespace std;

int main(){
    void order(int&, int&); //prototype declaration with reference variables

    int n1 = 99, n2 = 11;
    int n3 = 22, n4 = 88;

    order(n1, n2); //function call (passes n1, n2 to order)
    order(n3, n4); //function call (passes n3, n4 to order)

    cout << “n1=” << n1 << endl; //print out all numbers
    cout << “n2=” << n2 << endl;
    cout << “n3=” << n3 << endl;
    cout << “n4=” << n4 << endl;
    
    return 0;
}

void order(int& numb1, int& numb2){
    if(numb1 > numb2){
        int temp = numb1; //swap them
        numb1 = numb2;
        numb2 = temp; 
    }
}

/*
In main() there are two pairs of numbers—the first pair is not ordered and the second pair is
ordered. The order() function is called once for each pair, and then all the numbers are
printed out.
*/