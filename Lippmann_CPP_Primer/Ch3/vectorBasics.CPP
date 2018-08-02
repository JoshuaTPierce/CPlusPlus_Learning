//A vector is a class template.
//Templates are not themselves functions or classes. Instead, they can be thought of
// as instructions to the compiler for generating classes or functions. The process that
// the compiler uses to create classes or functions from templates is called instantiation. When we use a template, we specify what kind of class or function we
// want the compiler to instantiate.

//For a class template, we specify which class to instantiate by supplying additional
// information, the nature of which depends on the template. How we specify the
// information is always the same: We supply it inside a pair of angle brackets following
// the template’s name.

//In the case of vector, the additional information we supply is the type of the
// objects the vector will hold:

#include <iostream>
#include <string>
#include <vector>
using namespace std;

void declarations(){ //demonstrates vector instantiation types
    vector<int> ivec; //ivec holds objects of type int
    vector<Sales_item> Sales_vec; //Sales_vec holds items of class Sales_item
    vector<vector<string>> file; //files holds vectors which hold items class string
}

//Note
// vector is a template, not a type. Types generated from vector must
// include the element type, for example, vector<int>.

int main(){
    //declarations();
}