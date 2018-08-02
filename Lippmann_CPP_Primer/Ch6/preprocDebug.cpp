6.5.3. Aids for Debugging
/*
The idea is that the program will contain
debugging code that is executed only while the program is being developed. When the
application is completed and ready to ship, the debugging code is turned off. This
approach uses two preprocessor facilities: assert and NDEBUG.

The assert Preprocessor Macro
assert is a preprocessor macro. A preprocessor macro is a preprocessor variable
that acts somewhat like an inline function. The assert macro takes a single
expression, which it uses as a condition:

assert(expr);

evaluates expr and if the expression is false (i.e., zero), then assert writes a
message and terminates the program. If the expression is true (i.e., is nonzero), then
assert does nothing.

The assert macro is defined in the cassert header. As we’ve seen, preprocessor
names are managed by the preprocessor not the compiler (§ 2.3.2, p. 54). As a result,
we use preprocessor names directly and do not provide a using declaration for them.
That is, we refer to assert, not std::assert, and provide no using declaration
for assert.

As with preprocessor variables, macro names must be unique within the program.
Programs that include the cassert header may not define a variable, function, or
other entity named assert. In practice, it is a good idea to avoid using the name
assert for our own purposes even if we don’t include cassert. Many headers
include the cassert header, which means that even if you don’t directly include that
file, your programs are likely to have it included anyway.

The assert macro is often used to check for conditions that “cannot happen.” For
example, a program that does some manipulation of input text might know that all
words it is given are always longer than a threshold. That program might contain a
statement such as:
assert(word.size() > threshold);


The NDEBUG Preprocessor Variable
The behavior of assert depends on the status of a preprocessor variable named
NDEBUG. If NDEBUG is defined, assert does nothing. By default, NDEBUG is not
defined, so, by default, assert performs a run-time check.
We can “turn off” debugging by providing a #define to define NDEBUG.
In addition to using assert, we can write our own conditional debugging code
using NDEBUG. If NDEBUG is not defined, the code between the #ifndef and the
#endif is executed. If NDEBUG is defined, that code is ignored: */
void print(const int ia[], size_t size)
{
#ifndef NDEBUG
// _ _func_ _ is a local static defined by the compiler that holds the function's name
cerr << _ _func_ _ << ": array size is " << size << endl;
#endif

/*Here we use a variable named _ _func_ _ to print the name of the function we are
debugging. The compiler defines _ _func_ _ in every function. It is a local static
array of const char that holds the name of the function.
In addition to _ _func_ _, which the C++ compiler defines, the preprocessor
defines four other names that can be useful in debugging: /*

_ _FILE_ _ string literal containing the name of the file
_ _LINE_ _ integer literal containing the current line number
_ _TIME_ _ string literal containing the time the file was compiled
_ _DATE_ _ string literal containing the date the file was compiled

We might use these constants to report additional information in error messages: */
if (word.size() < threshold)
    cerr << "Error: " << _ _FILE_ _
        << " : in function " << _ _func_ _
        << " at line " << _ _LINE_ _ << endl
        << " Compiled on " << _ _DATE_ _
        << " at " << _ _TIME_ _ << endl
        << " Word read was \"" << word
        << "\": Length too short" << endl;

//If we give this program a string that is shorter than the threshold, then the
//following error message will be generated:
/*
Error: wdebug.cc : in function main at line 27
Compiled on Jul 11 2012 at 20:50:03
Word read was "foo": Length too short
*/