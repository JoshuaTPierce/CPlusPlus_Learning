/*Under the new standard, functions can return a braced list of values. As in any other
return, the list is used to initialize the temporary that represents the function’s return.
If the list is empty, that temporary is value initialized. Otherwise, the
value of the return depends on the function’s return type.

As an example, recall the error_msg function that
took a varying number of string arguments and printed an error message composed
from the given strings. Rather than calling error_msg, in this function we’ll return
a vector that holds the error-message strings: */

#include <vector>
#include <string>
#include <iostream>
using namespace std;

vector<string> process(){
    //...
    //expected and actual are string
    if(expected.empty())
        return {}; //return empty vector
    else if(expected == actual)
        return {"functionX", "okay"}; //return list-initialized vector
    else    
        return {"functionX", expected, actual};
}
/*
In the first return statement, we return an empty list. In this case, the vector that
process returns will be empty. Otherwise, we return a vector initialized with two or
three elements depending on whether expected and actual are equal.
In a function that returns a built-in type, a braced list may contain at most one
value, and that value must not require a narrowing conversion. If the
function returns a class type, then the class itself defines how the intiailizers are used.

Return from main
There is one exception to the rule that a function with a return type other than void
must return a value: The main function is allowed to terminate without a return. If
control reaches the end of main and there is no return, then the compiler implicitly
inserts a return of 0.
As we saw in § 1.1 (p. 2), the value returned from main is treated as a status
indicator. A zero return indicates success; most other values indicate failure. A nonzero
value has a machine-dependent meaning. To make return values machine
independent, the cstdlib header defines two preprocessor variables (§ 2.3.2, p. 54)
that we can use to indicate success or failure: */

int main(){
    if(some_failure)
        return EXIT_FAILURE; //defined in cstdlib
    else    
        return EXIT_SUCCESS; //defined in cstdlib
}