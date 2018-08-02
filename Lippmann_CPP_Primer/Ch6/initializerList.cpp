/* We can write a function that takes an unknown number of arguments of a single type
by using an initializer_list parameter. An initializer_list is a library type that
represents an array of values of the specified type. This type is defined
in the initializer_list header. The operations that initializer_list provides:

initializer_list<T> list; Default list - empty list of elements of type T.
initializer_list<T> list{a,b,c...}; elements are copies of the corresponding initializers - in this case, are const.
list.size(); returns the elements in a list
list.begin(); returns a pointer to the first element in list
list.end(); returns a pointer to one past the last element in list

Unlike vector, the elements in an initializer_list are always const values;
there is no way to change the value of an element in an initializer_list. */

//We can write our function to produce error messages from a varying number of
//arguments as follows:

#include <iostream>
using namepsace std;

void error_msg(initializer_list<string> il) {
    for(auto beg = il.begin(); beg != il.end(); ++beg)
        cout << *beg << " ";
    cout << endl;
}

//When we pass a sequence of values to an initializer_list parameter, we
//must enclose the sequence in curly braces:

    //expected, actual are string
    if(expected != actual)
        error_msg({"functionX", expected, actual});
    else
        error_msg({"functionX", "okay"}); 

//Here we’re calling the same function, error_msg, passing three values in the first call
//and two values in the second.