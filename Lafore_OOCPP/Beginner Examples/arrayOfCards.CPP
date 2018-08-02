//ArrayOfCards.CPP
//Card Game Using Arrays of Objects

#include <iostream>
#include <cstdlib> //for srand(), rand()
#include <ctime>   //for time for srand()
using namespace std;

enum Suit { clubs, diamonds, hearts, spades}; //COULD ALSO USE STATIC SYNTAX
const int jack = 11;
const int queen = 12;
const int king = 13;
const int ace = 14;

class card {
    private:
        int number;
        Suit suit; //instantiates the enum in the class definition
    public:
        card(){} //constructor
        void set(int n, Suit s) {suit = s; number = n;}
        void display(); //display card
};

void card::display(){  //defining function outside of class def
    if(number >= 2 && number <= 10){
        cout << number;
    }
    else {
        switch(number) {
            case jack: cout << “J”; break;
            case queen: cout << “Q”; break;
            case king: cout << “K”; break;
            case ace: cout << “A”; break;
        }
    }
   switch(suit) {
        case clubs: cout << static_cast<char>(5); break;
        case diamonds: cout << static_cast<char>(4); break;
        case hearts: cout << static_cast<char>(3); break;
        case spades: cout << static_cast<char>(6); break;
    } 
}

int main(){
    card deck[52];  //create a 52-member array of card objects
    int j;

    cout << endl;
    for(j = 0; j < 52; j++) {
        int num = (j % 13) + 2; //cycles through 2:14 4 times
        Suit su = Suit( j / 13); //cycles through 0:3 3 times
        deck[j].set(num, su); //set card
    }
    cout << "\nOrdered Deck:\n";
    for(j = 0; j < 52; j++){
        deck[j].display();
        cout << " ";
        if(!((j+1) % 13)){
            cout << endl;
        }
    }
    srand(time(NULL)); //seed random numbers with time
    for(j = 0; j < 52; j++){
        int k = rand() % 52; //pick another card at random
        card temp = deck[j];
        deck[j] = deck[k]; //and swap them
        deck[k] = temp;
    }
    count << "\nShuffled deck:\n";
    for(j = 0; j < 52; j++){
        deck[j].display();
        cout << ", ";
        if(!((j + 1) % 13)) {
            cout << endl;
        } 
    }
    return 0;
}