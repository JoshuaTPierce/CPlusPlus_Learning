//Sometimes we do not want to ignore the whitespace in our input. In such cases, we
// can use the getline function instead of the >> operator. The getline function takes
// an input stream and a string. This function reads the given stream up to and
// including the first newline and stores what it read—not including the newline—in its
// string argument. After getline sees a newline, even if it is the first character in
// the input, it stops reading and returns. If the first character in the input is a newline,
// then the resulting string is the empty string.

//Like the input operator, getline returns its istream argument. As a result, we
// can use getline as a condition just as we can use the input operator as a condition

///////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>
using namespace std;

int main(){
    string line;
    //read input a line at a time until end-of-file
    //only print lines that are not empty using IF
    while(getline(cin, line))
        auto len = line.size(); //len has type string::size, auto asks compiler to apply appropriate type
        if(!line.empty())
            cout << len << endl; //display the line's length
            cout << line << endl; //print the line
    
    return 0;
}

//Because line does not contain a newline, we must write our own. As usual, we use
// endl to end the current line and flush the buffer.
//The newline that causes getline to return is discarded; the newline is not
// stored in the string.