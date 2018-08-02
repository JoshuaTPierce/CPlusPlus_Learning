// Guess My Number
// The Classic Number Guessing Game
//----------------------------------------------------------------------------------------------

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	srand(static_cast<unsigned int>(time(0))); //seed random number generator

	int secretNumber = rand() % 100 + 1; //random number between 1 and 100
	int tries = 0; //initialize try counter to 0
	int guess; //number that the user guesses

	cout << "\tWelcome to Guess my Number\n\n" << endl;

	do {
		cout << "Enter a guess: ";
		cin >> guess;
		++tries; //increment try counter

		//logic to check guess
		if(guess > secretNumber){
			cout << "Too high!\n\n"; 
		}

		else if(guess < secretNumber){
			cout << "Too low!\n\n";
		}

		else{
			cout << "\nThat's correct! You guessed it in " << tries << " guesses.\n";
		}

	} while(guess != secretNumber); //repeat loop until guess is correct

	return 0;
}


