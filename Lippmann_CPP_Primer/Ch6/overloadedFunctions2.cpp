/*
Defining Overloaded Functions
Consider a database application with several functions to find a record based on
name, phone number, account number, and so on. Function overloading lets us define
a collection of functions, each named lookup, that differ in terms of how they do the
search. We can call lookup passing a value of any of several types: */

Record lookup(const Account&); // find by Account
Record lookup(const Phone&); // find by Phone
Record lookup(const Name&); // find by Name

Account acct;
Phone phone;
Record r1 = lookup(acct); // call version that takes an Account
Record r2 = lookup(phone); // call version that takes a Phone

/*
Here, all three functions share the same name, yet they are three distinct functions.
The compiler uses the argument type(s) to figure out which function to call.
Overloaded functions must differ in the number or the type(s) of their parameters.
Each of the functions above takes a single parameter, but the parameters have
different types.

It is an error for two functions to differ only in terms of their return types. If the
parameter lists of two functions match but the return types differ, then the second
declaration is an error: */

Record lookup(const Account&);
bool lookup(const Account&); // error: only the return type is different

//Two parameter lists can be identical, even if they don’t look the same:
// each pair declares the same function
Record lookup(const Account &acct);
Record lookup(const Account&); // parameter names are ignored
typedef Phone Telno;
Record lookup(const Phone&);
Record lookup(const Telno&); // Telno and Phone are the same type
