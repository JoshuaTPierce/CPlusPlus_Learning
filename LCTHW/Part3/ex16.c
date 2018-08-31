//Exercise 16: Structs and Pointers to Them

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

struct Person {
	char *name;
	int age;
	int height;
	int weight;
};

struct Person *Person_create(char *name, int age, int height, int weight) {

	struct Person *who = malloc(sizeof(struct Person));

	who->name = strdup(name);
	who->age = age;
	who->height = height;
	who->weight = weight;

	return who;
}

void Person_destroy(struct Person *who) {
	assert(who != NULL);
	free(who->name);
	free(who);
}

void Person_print(struct Person *who){
	printf("Name: %s\n", who->name);
	printf("\tAge: %d\n", who->age);
	printf("\tHeight: %d\n", who->height);
	printf("\tWeight: %d\n", who->weight);
}

int main(int argc, char *argv[]){
	//make two Person structures
	struct Person *joe = Person_create(
		"Joe Alex", 32, 64, 180);

	struct Person *frank = Person_create(
		"Frank Blank", 20, 72, 190);

	//print out the structs and where they are in memory
	printf("Joe is at memory location %p: \n", joe);
	Person_print(joe);

	printf("Frank is at memory location %p: \n", frank);
	Person_print(frank);

	//modify the values for the people structures
	joe->age += 20;
	joe->height -= 2;
	joe->weight += 40;
	Person_print(joe);

	frank->age += 20;
	frank->weight += 20;
	Person_print(frank);

	//destroy them (de-allocate the memory)
	Person_destroy(joe);
	Person_destroy(frank);

	return 0;

}

//------------------------------------------------------------------------
//Malloc: memory allocate, ask OS to give a piece of raw memory
//Pass to malloc the sizeof(struct Person), which calculates the total size of the struct,
// given all of the fields inside it.
//Assert ensures that malloc returns a valid piece of memory.
