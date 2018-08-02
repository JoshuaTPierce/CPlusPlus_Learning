#include <iostream>
#include <string>
using namespace std;

//prototypes:
int triple(int number);
string triple(string text);

//main
int main(){
	cout << "Tripling 5: " << triple(5) << endl;
	cout << "Tripling 'gamer': " << triple("gamer") << endl;

	return 0;
}

//function definitions
int triple(int number){
	return(number * 3);
}

string triple(string text){
	return (text + text + text);
}