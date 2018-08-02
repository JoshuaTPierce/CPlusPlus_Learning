//StringSearch.CPP
//Demonstrates Searching for Strings and Substrings in String Objects

#include <iostream>
#include <string>
using namespace std;

int main(){
    String s1 = 
        "In Xanadu did Kubla Kahn a stately pleasure dome decree";
     int n;

     n = s1.find("Kubla");
     cout << "Found 'Kubla' at " << n << endl;

     n = s1.find_first_of("spde");
     cout << "First of spde at " << n << endl;

     n = s1.find_first_not_of("aeiouAEIOU");
     cout << "First consonant at " << n << endl;

     return 0;
}