//Ways to initialize a vector
// vector<T>v1 vector v1 that holds objects of type T, default initializiation; v1 is empty
// vector<T>v2(v1) v2 has a copy of each element in v1
// vector<T>v2 = v1 equivalent to v2(v1)
// vector<T>v3(n, val) vector v3 has n elements with value val
// vector<T>v4(n) v4 hass n copies of a value-initialized object
// vector<T>v5{a,b,c} v5 has as many elements as there are initializers; elements are
//                    initialized by corresponding initializers
//vector<T>v5 = {a,b,c} equivalent to v5{a,b,c}
//////////////////////////////////////////////////////////////////////////////////////////

void init1(){ //demonstrates list initialization from C++ 11
    vector<string> articles = {"a", "an", "the"};
}

void init2(){ //more initialization methods
    vector<int> ivec(10, -1); // ten int elements, each initialized to -1
    vector<string> svec(10, "hi!"); //ten string elements, each is "hi!"
}

//We can usually omit the value and supply only a size. In this case the library creates a
// value-initialized element initializer for us. This library-generated value is used to
// initialize each element in the container. The value of the element initializer depends
// on the type of the elements stored in the vector.

//If the vector holds elements of a built-in type, such as int, then the element
// initializer has a value of 0. If the elements are of a class type, such as string, then
// the element initializer is itself default initialized:

void init3(){ //value initialization
    vector<int> ivec(10); //ten int elements, each initialized to 0
    vector<string> svec(10); //ten empty-initialized string elements
}

//In a few cases, what initialization means depends upon whether we use curly braces
// or parentheses to pass the initializer(s). For example, when we initialize a
// vector<int> from a single int value, that value might represent the vector’s size
// or it might be an element value. Similarly, if we supply exactly two int values, those
// values could be a size and an initial value, or they could be values for a two-element
// vector. We specify which meaning we intend by whether we use curly braces or
// parentheses:

void init4(){
    vector<int> v1(10); // v1 has ten elements with value 0
    vector<int> v2{10}; // v2 has one element with value 10
    vector<int> v3(10, 1); // v3 has ten elements with value 1
    vector<int> v4{10, 1}; // v4 has two elements with values 10 and 1
}

//When we use parentheses, we are saying that the values we supply are to be used to
// construct the object. Thus, v1 and v3 use their initializers to determine the vector’s
// size, and its size and element values, respectively.

//When we use curly braces, {...}, we’re saying that, if possible, we want to list
// initialize the object. That is, if there is a way to use the values inside the curly braces
// as a list of element initializers, the class will do so. Only if it is not possible to list
// initialize the object will the other ways to initialize the object be considered. The
// values we supply when we initialize v2 and v4 can be used as element values. These objects are list initialized; the resulting vectors have one and two elements,
// respectively.

//On the other hand, if we use braces and there is no way to use the initializers to list
// initialize the object, then those values will be used to construct the object. For
// example, to list initialize a vector of strings, we must supply values that can be
// used as strings. In this case, there is no confusion about whether to list initialize the
// elements or construct a vector of the given size:

void init5(){
    vector<string> v5{"hi"}; // list initialization: v5 has one element
    vector<string> v6("hi"); // error: can't construct a vector from a string literal
    vector<string> v7{10}; // v7 has ten default-initialized elements
    vector<string> v8{10, "hi"}; // v8 has ten elements with value "hi"
}

int main(){
    //init1();
    //init2();
    //init3();
    //init4();
}