//Exercise 10: Arrays of Strings, Looping

#include <stdio.h>

int main(int argc, char *argv[]){
	int i = 0;

	//create an array of strings
	char *states[] = {
		"California", "Oregon", "Washington", "Texas" 
	};

	int num_states = 4;

	for(i = 0; i < num_states; i++){
		printf("State %d: %s\n", i, states[i]);
	}

	return 0;

}

