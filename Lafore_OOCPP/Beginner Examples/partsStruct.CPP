//PartsStruct.CPP
//Demonstrates Structures (Structs)
//A struct is a collection of simple variables with a structure similar to a Class.

#include <iostream>
using namespace std;

//////////////////////////////////////////////////////
struct part {
    int modelnumber;
    int partnumber;
    float cost;
};
///////////////////////////////////////////////////////
int main(){
    part part1;          //define a structure variable

    part1.modelnumber = 6244;
    part1.partnumber = 373;
    part1.cost = 217.55;

    cout << "Model " << part1.modelnumber;
    cout << ", part " << part1.partnumber;
    cout << ", costs $: " part1.cost << endl;
    
    return 0;
}

//Workflow:
//1. Define the Structure
//2. Define structure variables
//3. Access the members of the structure with a constructor in the function.