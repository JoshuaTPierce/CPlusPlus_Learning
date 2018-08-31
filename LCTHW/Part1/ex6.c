#include <stdio.h>

int main(int argc, char *argv[]){
	int distance = 100;
	float power = 2.345f;
	double super_power = 56789.4532;
	char initial = 'T';
	char first_name[] = "Josh";
	char last_name[] = "P.";

	printf("You are %d miles away \n", distance);
	printf("You have %f levels of power\n", power);
	printf("You have %f super powers\n", super_power);
	printf("My middle initial is %c.\n", initial);
	printf("My whole name is %s %c. %s.\n", first_name, initial, last_name);

	return 0;

}
