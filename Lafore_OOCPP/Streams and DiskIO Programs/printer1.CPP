//Demonstrates Simple Output to Printer

#include <fstream> 
using namespace std;

int main(){
    char* s1 = "\nToday's winning number is: ";
    int n1 = 17892;

    ofstream outfile; //make outfile
    outfile.open("PRN"); //open it for printer
    outfile << s1 << n1 << endl; //send data to printer
    outfile << '\x0C'; //formfeed to eject page

    return 0;
}

//You can send any amount of formatted output to the printer this way. The ‘\x0C’ character
//causes the page to eject from the printer.