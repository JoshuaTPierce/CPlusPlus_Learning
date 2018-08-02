//Exercise 6.27: Write a function that takes an initializer_list<int>
//and produces the sum of the elements in the list.

#include <iostream>
#include <vector>
using namespace std;

int sumIntList(initializer_list<int> il){
	int sum = 0;
	for(auto &e : il)
		sum += e;
	return sum;
}

int main(){
	cout << sumIntList({1,2,3,4,5,6,7,8,9}) << endl;
	return 0;
}
