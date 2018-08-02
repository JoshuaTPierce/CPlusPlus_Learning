//                          ddRoller.cpp
// Challenge from reddit.com/r/dailyprogrammer. This function
// generates a random "roll" integer for nDn-style dice rolls for the game
// Dungeons & Dragons.Takes two numbers as input for number of dice(input1),
// and face count of the dice(input2).
//
// For example, 4D10 would be a roll of 4 dice each  with 10 faces.
// For this example, the max number would be 40, and min would be 4.
//
// Patterns and documentation for packages:
// https://cpppatterns.com/patterns/choose-random-element.html
// https://en.cppreference.com/w/cpp/numeric/random/mersenne_twister_engine
//////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <vector>
#include <random>
using namespace std;


void ddRoller(int dieCount, int dieFace){
	//Create range of values (vector) to select from.
	int beg = 1 * dieCount;
	int end = dieCount * dieFace;
	vector<int> range;
	for(int i = beg; i <= end; i++)
		range.push_back(i);

	//Select a random value from range vector.
	random_device random_device; //class random_device from pkg "random"
	mt19937 engine{random_device()};
	uniform_int_distribution<int> dist(0, range.size() + 1);
	int finalRoll = range[dist(engine)];

	cout << "Your roll is: " << finalRoll << endl;
}

int main(){
	int dieCount;
	int dieFace;

	cout << "Enter number of dice: " << endl;
	cin >> dieCount;
	cout << "Enter number of faces per dice: " << endl;
	cin >> dieFace;

	ddRoller(dieCount, dieFace);

	return 0;
}

///////////////////////////////////////////////////////////////////
//Notes on my19937:
//Seed mt19937 to create a uniform random distribution of integers
// from 0 to range.size()-1, inclusive. This distribution will give
// us any integer in this range with equal probability.
//This gives us an index that corresponds to any element in range
// with equal probability.The final roll returns the value of the 
// index from the range.
////////////////////////////////////////////////////////////////////