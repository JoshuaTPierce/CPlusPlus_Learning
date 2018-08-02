//A function with an initializer_list parameter can have other parameters as
// well. For example, our debugging system might have a class, named ErrCode, that
// represents various kinds of errors. We can revise our program to take an ErrCode in
// addition to an initializer_list as follows:

#include <iostream>
using namespace std;

void error_msg(ErrCode e, initializer_list<string> il) {
    cout << e.msg() << ". ";
    for(const auto &elem : il)
        cout << elem << " ";
    cout << endl;
}

//To call this version, we need to revise our calls to pass an ErrCode argument:

    if (expected != actual)
        error_msg(ErrCode(42), {"functionX", expected, actual});
    else
        error_msg(ErrCode(0), {"functionX", "okay"});