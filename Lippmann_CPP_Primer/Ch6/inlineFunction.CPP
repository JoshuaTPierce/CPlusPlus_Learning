/*Calling a function is apt to be slower than evaluating the equivalent expression. On
most machines, a function call does a lot of work: Registers are saved before the call
and restored after the return; arguments may be copied; and the program branches to
a new location.

inline Functions Avoid Function Call Overhead
A function specified as inline (usually) is expanded “in line” at each call. If
shorterString were defined as inline, then this call: */

cout << shorterString(s1, s2) << endl; 

//(probably) would be expanded during compilation into something like

cout << (s1.size() < s2.size() ? s1 : s2) << endl;

//The run-time overhead of making shorterString a function is thus removed.
//We can define shorterString as an inline function by putting the keyword
//inline before the function’s return type:

// inline version: find the shorter of two strings
inline const string &
shorterString(const string &s1, const string &s2)
{
return s1.size() <= s2.size() ? s1 : s2;
}

/*Note
The inline specification is only a request to the compiler. The compiler may
choose to ignore this request.
In general, the inline mechanism is meant to optimize small, straight-line functions
that are called frequently. Many compilers will not inline a recursive function.