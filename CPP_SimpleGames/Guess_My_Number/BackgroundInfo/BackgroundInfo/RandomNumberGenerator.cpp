#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	srand(static_cast<unsigned int>(time(0))); //seed the RNG
	int randomNumber = rand(); //call rand() from pkg cstdlib
	
	//......do whatever with randomNumber......//

	return 0;
}

//-----NOTES-----
// The rand() function generates a random number between 0 and at least 32767. The exact upper
// limit depends on your implementation of C++. The upper limit is stored in the constant
// RAND_MAX, which is defined in cstdlib. So if you want to know the maximum random number
// rand() can generate, just send RAND_MAX to cout.

// Seeding the Random Number Generator
// Computers generate pseudorandom numbers—not truly random numbers—
// based on a formula. One way to think about this is to imagine that the computer
// reads from a huge book of predetermined numbers. By reading from this book,
// the computer can appear to produce a sequence of random numbers.

// But there’s a problem: The computer always starts reading the book from the
// beginning. Because of this, the computer will always produce the same series of
// “random” numbers in a program. In games, this isn’t something we’d want. We
// wouldn’t, for example, want the same series of dice rolls in a game of craps every time we played.

// A solution to this problem is to tell the computer to start reading from some
// arbitrary place in the book when a game program begins. This process is called
// seeding the random number generator. Game programmers give the random
// number generator a number, called a seed, to determine the starting place in this
// sequence of pseudorandom numbers.

// The following code seeds the random number generator:
// srand(static_cast<unsigned int>(time(0)));

// Seed random number generator
// Wow, that’s a pretty cryptic looking line, but what it does is simple. It seeds
// the random number generator based on the current date and time, which is
// perfect since the current date and time will be different for each run of the program.

// In terms of the actual code, the srand() function seeds the random number
// generator—you just have to pass it an unsigned int as a seed. What gets passed
// to the function here is the return value of time(0) —a number based on the
// current system date and time. The code static_cast<unsigned int> just
// converts (or casts) this value to an unsigned int. Now, you don’t have to
// understand all the nuances of this line; the least you need to know is that if you
// want a program to generate a series of random numbers that are different each
// time the program is run, your program should execute this line once before calls to rand().

