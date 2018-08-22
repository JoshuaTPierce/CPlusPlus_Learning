#include <stdio.h>

int main(int argc, char *argv[], char *env[]) {

	//Print Fahr-Cels Table
	int fahr, celsius;
        int lower, upper, step;
        lower = 0;
        upper = 1000;
        step = 10;

        fahr = lower;
        while(fahr <= upper) {
                celsius = 5 * (fahr - 32) / 9;
                printf("%d\t%d\n", fahr, celsius);
                fahr = fahr + step;
	}

	//Print Arguments Info
	for(int i = 0; i < argc; i++){
	        printf("argument number %d is %s\n", i, argv[i]);
	}

	//Print Environment Variables
	int k = 0;
        printf("Environment variables:");
        while(env[k]){
	        printf("env[%d] = %s\n", k, env[k]);
       		k++;
   	}

	return 0;

}
