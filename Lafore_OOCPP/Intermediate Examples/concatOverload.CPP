//ConcatOverload.CPP
//Demonstrates Operator Overloading to Concatenate two Strings

#include <iostream>
#include <string.h> //for strcpy(), strcat()
#include <stdlib.h> //for exit
using namespace std;

class String{ //user-defined String type
    private:
        enum { SZ = 80 }; //length of string
        char str[SZ]; //holds a string
    public:
        String() {
            strcpy(str[SZ]); //constructor, no args 
                }
        String(char s[]){ //constructor, one arg
            strcpy(str, s); 
                } 
        void display() const { 
            cout << str; //display the string
                }
        String operator + (String ss) const { //add strings
            String temp; //make temporary string
            if (strlen(str) + strlen(ss.str) < SZ) {
                strcpy(temp.str, str); //copy string to temp
                strcat(temp.str, ss.str); //add the argument string
            }
            else {cout << "\nString Overflow;" exit(1); }
            return temp;
        }
};

int main() {
    String s1 = “\nMerry Christmas! “; //uses constructor 2
    String s2 = “Happy new year!”; //uses constructor 2
    String s3; //uses constructor 1

    s1.display(); //display strings
    s2.display();
    s3.display();
    s3 = s1 + s2; //add s2 to s1,

    //assign to s3
    s3.display(); //display s3
    cout << endl;

    return 0;
}