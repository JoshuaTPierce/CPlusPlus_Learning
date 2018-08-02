//Exercise 6.8: Write a header file named Chapter6.h that contains
//declarations for the function you wrote for the exercise 6.5


#ifndef ex6_8_H
#define ex6_8_H

//FUNCTION PROTOTYPE
//These three elements—the return type, function name, and parameter types—describe
//the function’s interface. They specify all the information we need to call the function.
//Function declarations are also known as the function prototype.
float abs(float input);

#endif

/*
A function declaration is just like a function definition except that a declaration has
no function body. In a declaration, a semicolon replaces the function body.

Because a function declaration has no body, there is no need for parameter names.
Hence, parameter names are often omitted in a declaration. Although parameter
names are not required, they can be used to help users of the function understand
what the function does.