#include <string>
#include <iostream>
using namespace std;

int main(){
    string buf;
    while(cin >> bug && !buf.empty()){
        switch(buf[0]){
            case '-': //process up to the first blank
                for (auto it = buf.begin() + 1; it != buf.end(); it++){
                    if(*it == ' ')
                        break; //break #1, exits the loop
                    }
                //break #1 transfers control here
                //remaining '-' processing:
                break;
            case '+':
                cout << "+" << endl;
        } //end switch
    } //end while

    return 0;
}//end main