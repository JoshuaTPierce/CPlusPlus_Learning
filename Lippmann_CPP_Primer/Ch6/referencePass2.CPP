/*
Using References to Avoid Copies
It can be inefficient to copy objects of large class types or large containers. Moreover,
some class types (including the IO types) cannot be copied. Functions must use
reference parameters to operate on objects of a type that cannot be copied.

As an example, we’ll write a function to compare the length of two strings.
Because strings can be long, we’d like to avoid copying them, so we’ll make our
parameters references. Because comparing two strings does not involve changing
the strings, we’ll make the parameters references to const.
*/

#include <string>
#include <iostream>
using namespact std;

bool isShorter(const string &s1, const string &s2){
    return s1.size() < s2.size();
}

int main(){
    string s1;
    string s2;
    cout << "Enter two strings: " << endl;
    cin >> s1 >> s2;
    isShorter(s1, s2);
    return 0;
}

/*
Best Practices
Reference parameters that are not changed inside a function should be
references to const.
*/