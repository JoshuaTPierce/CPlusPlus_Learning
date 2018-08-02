//Exercise 5.20: Write a program to read a sequence of strings from the
//standard input until either the same word occurs twice in succession or all
//the words have been read. Use a while loop to read the text one word at a
//time. Use the break statement to terminate the loop if a word occurs twice
//in succession. Print the word if it occurs twice in succession, or else print a
//message saying that no word was repeated.

#include <string>
#include <iostream>
using namespace std;

int main(){
    string last, curr;
    bool hasRepeat = false;
    while(cin >> curr)
        if(curr = last) {
            cout << "Found repeated word: " << curr << endl;
            break; }
        else{
            last = curr;
        }
    if(!hasRepeat)
        cout << "No word was repeated." << endl;
}