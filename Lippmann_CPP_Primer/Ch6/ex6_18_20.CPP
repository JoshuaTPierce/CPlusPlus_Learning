/*Exercise 6.18: Write declarations for each of the following functions. When
you write these declarations, use the name of the function to indicate what
the function does.
(a) A function named compare that returns a bool and has two parameters
that are references to a class named matrix. */

#include <vector>

bool matCompare(const matrix &m1, const matrix &m2); //prototype

/* (b) A function named change_val that returns a vector<int> iterator
and takes two parameters: One is an int and the other is an iterator for a
vector<int>. */

vector<int>::iterator &change_val(int, vector<int>::iterator &);

/*Exercise 6.20: When should reference parameters be references to const?
What happens if we make a parameter a plain reference when it could be a
reference to const?

If the reference parameters will not be changed inside function, then they should be reference to const.

If we make a parameter a plain reference, then we can not pass

a const object,
or a literal,
or an object that requires conversion to a plain reference parameter.
*/