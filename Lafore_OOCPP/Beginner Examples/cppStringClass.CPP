//cppStringClass.CPP
//Demonstrates the Standard C++ String Class
//and Basic Manipulation of Strings

#include <iostream>
#include <string>
using namespace std;

int main(){
    string s1("Man"); //initialize string s1, an object of class String
    string s2 = "Beast"; //another way to initialize
    string s3; //instantiated but not initialized

    s3 = s1;
    cout << "s3 = " << s3 << endl;
    s3 += s2; //operator overload concatenation

    s1.swap(s2); //swap s1 and s2
    cout << s1 << " nor " s2 << endl;
    return 0;
}