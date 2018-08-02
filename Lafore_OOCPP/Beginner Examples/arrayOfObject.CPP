//Array of Object.CPP
//Demonstrates an array of objects (storing an object in an array)

#include <iostream>
using namespace std;

class Distance {
    private:
        int feet;
        float inches;
    
    public:
        void getdist() { //get distance from user
            cout << "\n Enter feet: "; cin >> feet;
            cout << "\n Enter inches"; cin >> feet;
        }
        void showdist() const {
             cout << feet << "\’-" << inches << "\”"; 
        }
};

int main(){
    Distance dist[100]; //array of distances
    int n = 0; //number of entries
    char ans; //user response (y/n)
    cout << endl;

    do {
        cout << "Enter a distance number " << n + 1;
        dist[n++].getdist();
        cout << "Enter another? (y/n): ";
        cin >> ans;
    } while (ans != 'n');

    for(int j = 0; j < n; j++){
        cout << "\nDistance number " << j + 1 << " is ";
        dist[j].showdist();
    }
    cout << endl;
    return 0;
}