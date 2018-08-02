/* A constexpr function is a function that can be used in a constant expression. 
A constexpr function is defined like any other function but must meet certain
restrictions: The return type and the type of each parameter in a must be a literal
type, and the function body must contain exactly one return statement: */

constexpr int new_sz() { return 42; }
constexpr int foo = new_sz(); // ok: foo is a constant expression

/*
Here we defined new_sz as a constexpr that takes no arguments. The compiler can
verify—at compile time—that a call to new_sz returns a constant expression, so we
can use new_sz to initialize our constexpr variable, foo.

When it can do so, the compiler will replace a call to a constexpr function with its
resulting value. In order to be able to expand the function immediately, constexpr
functions are implicitly inline.
*/