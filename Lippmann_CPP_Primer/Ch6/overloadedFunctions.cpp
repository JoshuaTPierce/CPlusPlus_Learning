//Functions that have the same name but different parameter lists and that appear in
//the same scope are overloaded. For example, in § 6.2.4 (p. 214) we defined several
//functions named print:

void print(const char *cp);
void print(const int *beg, const int *end);
void print(const int ia[], size_t size);

//These functions perform the same general action but apply to different parameter
//types. When we call these functions, the compiler can deduce which function we want
//based on the argument type we pass:

int j[2] = {0,1};
print("Hello World"); // calls print(const char*)
print(j, end(j) - begin(j)); // calls print(const int*, size_t)
print(begin(j), end(j)); // calls print(const int*, const int*)

//Function overloading eliminates the need to invent—and remember—names that exist
//only to help the compiler figure out which function to call.
//Note: Main may not be overloaded.