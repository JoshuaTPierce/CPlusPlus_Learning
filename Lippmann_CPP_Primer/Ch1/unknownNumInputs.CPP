//Example: Reading and Summing and Unknown Number of Inputs

#include <iostream>
using namespace std;

int maint(){
    int sum = 0;
    int value = 0;
    
    while(std::cin >> value)
        sum += value;
    std::cout << "Sume is: " << sum << std::endl;

    return 0;
}

//END OF FILE FROM KEYBOARD IN TERMINAL:
//ctrl + z + enter