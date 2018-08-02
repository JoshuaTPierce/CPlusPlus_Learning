//A function that calls itself, either directly or indirectly, is a recursive function. As an
//example, we can rewrite our factorial function to use recursion:

#include <iostream>
using namespace std;

// calculate val!, which is 1 * 2 * 3 . . . * val
int factorial(int val) {
    if (val > 1)
        return factorial(val-1) * val;
    return 1;
}

/*
In this implementation, we recursively call factorial to compute the factorial of the
numbers counting down from the original value in val. Once we have reduced val to
1, we stop the recursion by returning 1.

There must always be a path through a recursive function that does not involve a
recursive call; otherwise, the function will recurse “forever,” meaning that the function
will continue to call itself until the program stack is exhausted. Such functions are
sometimes described as containing a recursion loop. In the case of factorial, the
stopping condition occurs when val is 1. */