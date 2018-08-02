/*
A return statement terminates the function that is currently executing and returns
control to the point from which the function was called. There are two forms of
return statements:
return;
return expression;

A return with no value may be used only in a function that has a return type of
void. Functions that return void are not required to contain a return. In a void
function, an implicit return takes place after the function’s last statement.

Typically, void functions use a return to exit the function at an intermediate
point. This use of return is analogous to the use of a break statement: */

void swap(int &v1, int &v2){
    //if the values are the same, no need to swap, just return
    if(v1 == v2)
        return;
    int tmp = v2;
    v2 = v1;
    v1 = tmp;
    //no explicit return necessary for void function
}