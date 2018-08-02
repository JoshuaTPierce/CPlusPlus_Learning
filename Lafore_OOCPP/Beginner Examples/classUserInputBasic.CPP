//ClassUserInputBasic.CPP
//Demonstrates Class Methods that Get User Input

#include <iostream>
using namespace std;

class Distance {
    private:
        int feet;
        float inches;

    public:
        void setdist(int ft, float in) {feet = ft; inches = in;}
        void getdist(){
            cout << "\n Enter feet: "; cin >> feet;
            cout << "\n Enter invhes:"; cin >> inches;
        }
        void showdist() {cout << feet << "\'-" << inches << '\"';}
        }
};

int main(){
    Distance dist1, dist2;

    dist1.getdist();
    dist2.getdist();

    cout << "\ndist1 ="; dist1.showdist();
    cout << "\ndist2 ="; dist2.showdist();
}