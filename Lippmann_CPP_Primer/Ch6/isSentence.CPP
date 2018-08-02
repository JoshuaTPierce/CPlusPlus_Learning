#include <string>
#include <iostream>
using namespace std;

// returns the index of the first occurrence of c in s
// the reference parameter occurs counts how often c occurs

string::size_type find_char(const string &s, char c, string::size_type &occurs){
    auto ret = s.size(); //position of the first occurence, if any
    occurs = 0; //set the occurence count parameter
    for(decltype(ret) i = 0; i != s.size(); i++){
        if(s[i] == c){
            if(ret == s.size())
                ret = i; //remember the first occurrence of c
            ++occurs; //increment occurrence count
        }
    }
}

//Use findChar inside a new function to determine whether a string is a sentence (by searching for a period)

bool is_sentence(const string &s){
	//if there's a single period at the end of s, then s is a sentence
	string::size_type ctr = 0;
	return find_char(s, '.', ctr) == s.size() - 1 && ctr == 1;
}

int main(){
	string input;
	cout << "Enter a string: " << endl;
	cin >> input;
	is_sentence(input);

	return 0;
}
