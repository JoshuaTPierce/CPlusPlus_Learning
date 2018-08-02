//ExpressionParsing.CPP
//Demonstrates Parsing Using Pointers

#include <iostream>
using namespace std;

const int LEN = 80; //length of expressions, in characters
const int MAX = 40; //size of stack

class Stack {
    private:
        char st[MAX]; //stack: array of chars
        int top; //number on top of stack
    public:
        Stack() //constructor
            { top = 0; }
        void push(char var) //put char on stack
            { st[++top] = var; }
        char pop() //take char off stack
            { return st[top--]; }
        int gettop() //get top of stack
            { return top; }
};

class express { //expression class
    private:
        Stack s; //stack for analysis
        char* pStr; //pointer to input string
        int len; //length of input string
    public:
        express(char* ptr) {
            pStr = ptr; //set pointer to string
            len = strlen(pStr); //set length (strlen)
                }
        void parse();
        int solve(); 
};

void express::parse(){
    char ch; //char from input string
    char lastval; //last value
    char lastop; //last operator

    //Start Parsing Logic

    for(int j = 0; j < len; j++){ //for each input char
        ch = pStr[j]; //get next char from input array

        if(ch >= '0' && ch <= '9') //if it's a digit
            s.push(ch- '0'); //save numerical operator
        
        else if(ch==’+’ || ch==’-’ || ch==’*’ || ch==’/’) { //if its an operator
            if(s.gettop() == 1) //if it's first operator
                s.push(ch) //put on stack

            else { //if it's not the first operator
                lastval = s.pop(); //get previous digit
                lastop = s.pop(); //get previous operator 

                //If this is * or / AND last operator was + or -
                if( (ch == '*' || ch == '/') && (lastop == '+' || lastop == '-')){
                    s.push(lastop); //restore last two pops
                    s.push(lastval); }

                else { //in all other cases
                    switch(lastop) {    //do last operation
                                        //push result on stack
                    case ‘+’: s.push(s.pop() + lastval); break;
                    case ‘-’: s.push(s.pop() - lastval); break;
                    case ‘*’: s.push(s.pop() * lastval); break;
                    case ‘/’: s.push(s.pop() / lastval); break;
                    default: cout << “\nUnknown oper”; exit(1);
                    } //end switch
                }//end else (in all other cases)
            
            s.push(ch) //put current character op on stack
            
            } //end else, not first operator 
        } //end else if, it's an operator

        else {cout << "\n Unknown input character"; exit(1);}
    } //end for
} //end parse()

int express::solve(){
    char lastval; //previous value

    while(s.gettop() > 1) {
        lastval = s.pop; //get previous value
        switch(s.pop()) { //get previous operator, do operation, push answer
            case ‘+’: s.push(s.pop() + lastval); break;
            case ‘-’: s.push(s.pop() - lastval); break;
            case ‘*’: s.push(s.pop() * lastval); break;
            case ‘/’: s.push(s.pop() / lastval); break;
            default: cout << “\nUnknown operator”; exit(1);
        } //end switch
    } //end while

    return int(s.pop()); //last item on stack is ans
}  //end solve

int main(){
    char ans();
    char string[LEN]; //input string from user

    cout << “\nEnter an arithmetic expression”
            “\nof the form 2+3*4/3-2.”
            “\nNo number may have more than one digit.”
            “\nDon’t use any spaces or parentheses.”;

    do {
        cout << "\nEnter Expression: "; cin >> string;
        express* eptr = new express(string); //make expression
        eptr->parse(); //parse it
        cout << “\nThe numerical value is: “
             << eptr->solve(); //solve it
        delete eptr; 
        cout << "\nEnter another (y/n)?"; cin >> ans;
    } while(ans == 'y');
    return 0;
}