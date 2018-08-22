//More Compact Version, Function Only. No Main Function.

int power(int base, int n){
    int p;
    for(p = 1; n > 0; --n)
        p = p * base;
    
    return p;
}

/*
In C, all function arguments are passed "by value." 
This means that the called function is given the values of its
arguments in temporary variables rather than the originals

The main distinction is that in C the called function cannot directly alter a
variable in the calling function; it can only alter its private, temporary copy.
Call by value is an asset, however, not a liability. It usually leads to more
compact programs with fewer extraneous variables, because parameters can be
treated as conveniently initialized local variables in the called routine.

The parameter n is used as a temporary variable, and is counted down (a for
loop that runs backwards) until it becomes zero; there is no longer a need for
the variable i. Whatever is done to n inside power has no effect on the argument
that power was originally called with.
*/