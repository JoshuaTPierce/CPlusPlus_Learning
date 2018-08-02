//Demonstrates a Multifile Program with Class Definition
// In Header (multiple files simulated in a single file here)

//header1.h
class someClass {
    private:
        int memberVar;
    public:
        int memberFunc(int, int)
};

//file1.cpp
#include "header1.h" //ensure this resides in the same directory
int main(){
    someClass obj1; //instantiate class
    int var1 = obj1.memberFunc(2, 3); //use a header member class on object
}

//file2.cpp
#include "header1.h" //ensure this resides in the same directory
int main(){
    someClass obj2; //instantiate class
    int var2 = obj2.memberFunc(2, 3); //use a header member class on object
}

