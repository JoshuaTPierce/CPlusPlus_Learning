#include <stdio.h>
#define STRINGSIZE 256

int main(int argc, char *argv[]){
    char town[STRINGSIZE] = "Guildford";
    char county[STRINGSIZE] = "Surrey";
    char country[STRINGSIZE] = "UK";
    int population = 66773;
    float latitude = 51.238599;
    float longitude = -0.566257;

    printf("Town name: %s population: %d\n", town, population);
    printf("County: %s\n", county);
    printf("Country: %s\n", country);
    printf("Location latitude: %f longitude %f\n", latitude, longitude);
    printf("Char = %d byte int = %d bytes float = %d bytes\n", sizeof(char), sizeof(int), sizeof(float));
    printf("memory used: %d bytes\n", ((STRINGSIZE * 3) * sizeof(char)) + sizeof(int) + (2 * sizeof(float)));

    return 0;
}