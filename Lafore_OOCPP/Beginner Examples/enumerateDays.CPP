//EnumerateDats.CPP
//Demonstrates enumeration (self-defined data types)

#include <iostream>;
using namespace std;

enum days_of_week { Sun, Mon, Tue, Wed, Thu, Fri, Sat };

int main(){
    days_of_week day1, day2;   //construct variables based on enum

    day1 = Mon;
    day2 = Tue;

    int diff = day2 - day1; 
    cout << "Days between = " << diff << endl;

    if(day1 < day2) {
        count << day1 << " comes before " << day2 << endl;
    }

    return 0;
} 