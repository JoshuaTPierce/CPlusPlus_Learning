//Let's assume we have a number between 0 and 15 and we want to generate
// the hexademical representation of that number. 

#include <iostream>
#include <string>
using namespace std;

int main(){
    const string hexdigits = "123456789ABCDEF"; //possible hex digits
    cout << "Enter a series of numbers between 0 and 15"
         << " separated by spaces. Hit ENTER when finished: "
         << endl;
    string result; //will hold resulting hexify'd string
    string::size_type n; //hold numbers from input
    while (cin >> n)
        if (n < hexdigits.size())
            result += hexdigits[n];
    cout << "Your hex number is: " << result << endl;
}

//We start by initializing hexdigits to hold the hexadecimal digits 0 through F. We
// make that string const (§ 2.4, p. 59) because we do not want these values to
// change. Inside the loop we use the input value n to subscript hexdigits. The value
// of hexdigits[n] is the char that appears at position n in hexdigits. For
// example, if n is 15, then the result is F; if it’s 12, the result is C; and so on. We
// append that digit to result, which we print once we have read all the input.

//Whenever we use a subscript, we should think about how we know that it is in
// range. In this program, our subscript, n, is a string::size_type, which as we
// know is an unsigned type. As a result, we know that n is guaranteed to be greater
// than or equal to 0. Before we use n to subscript hexdigits, we verify that it is less
// than the size of hexdigits.