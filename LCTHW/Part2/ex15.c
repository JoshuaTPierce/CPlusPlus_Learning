#include <stdio.h>

int main(int argc, char *argv[]){
	//create two arrays
	int ages[] = {23,43,12,89,2};
	char *names[] = {"Alan","Frank","Mary","John","Lisa"};

	//get the size of ages
	int count = sizeof(ages) / sizeof(int);
	int i = 0;

	//first way using indexing
	for(i = 0; i < count; i++){
		printf("%s has %d years alive.\n", names[i], ages[i]);
	}

	printf("---\n");

	//setup pointers to the start of arrays
	int *cur_age = ages;
	char **cur_name = names;

	//second way using pointers
	for(i = 0; i < count; i++){
		printf("%s is %d years old.\n", *(cur_name+i), *(cur_age+i)); //dereference the pointers
	}

	printf("---\n");

	//third way (pointers are just arrays)
	for(i = 0; i < count; i++){
		printf("%s is %d years old again.\n", cur_name[i], cur_age[i]);
	}

	return 0;

}
