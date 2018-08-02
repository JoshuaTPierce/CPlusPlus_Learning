//CardGameOOP.CPP
//A Simple Card Game Using Classes and Objects

#include <iostream>
using namespace std;
//--------------------------------------------------------------
class card {
    private:
        int number; //2 to 10, jack, quee, king, ace
        Suit suit; //clubs, diamonds, hearts, spades (user-defined)

    public:
        card(){} //no-argument constructor
        card(int n, Suit s) : number(n), suit(s) {} //two-argument constructor
        void display(); //display card
        bool isEqual(card); //check if same as another card    
};
//---------------------------------------------------------------
void card::display() { //member function defined outside class
    if (number >= 2 && number <= 10) {
        cout << number << " of "; 
        }
    else {
        switch(number){
            case jack: cout << “jack of “; break;
            case queen: cout << “queen of “; break;
            case king: cout << “king of “; break;
            case ace: cout << “ace of “; break; 
        }
    }
    switch(suit){
        case clubs: cout << “clubs”; break;
        case diamonds: cout << “diamonds”; break;
        case hearts: cout << “hearts”; break;
        case spades: cout << “spades”; break;
        }
}

//-----------------------------------------------------------------
bool card::isEqual(card c2){
    return (number == c2.number && suit == c2.suit) ? true : false; //ternary operator
}

//-----------------------------------------------------------------
int main(){
    card temp, chosen, prize; //define various cards
    int position;

    card card1(7, clubs); //define and initialize card 1
    cout << "\nCard 1 is the ";
    card1.display();

    card card2(jack, hearts);
    cout << "\nCard 2 is the ";
    card2.display();

    card card3(ace, spades);
    cout << "\nCard 3 is the ";
    card3.display();

    prize = card3; //prize is the card to guess, set to card 3

    cout << "\nI'm swapping card 1 and card 3.";
    temp = card3; card3 = card1; card2 = temp;

    cout << "\nI'm swapping card 2 and card 3.";
    temp = card3; card3 = card2; card2 = temp;

    cout << "\nI’m swapping card 1 and card 2";
    temp = card2; card2 = card1; card1 = temp;

    cout << "\nNow, where (1, 2, or 3) is the ";
    prize.display();
    cout << "? ";
    cin >> position;

    switch(position){
        case 1: chosen = card1; break;
        case 2: chosen = card2; break;
        case 3: chosen = card3; break;
    }
    if (chosen.isEqual(prize)){
        cout << "That's right! You win!";
    } else {
        cout << "Sorry, you lose.";
    }
    cout << " You chose the ";
    chosen.display();
    cout << endl;
    return 0;
}