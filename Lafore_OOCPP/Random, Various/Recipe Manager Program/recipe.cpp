#include <iostream>
#include <process.h>
#include "ingredient.h"
#include <string>
using namespace std;

void Recipe::getRecipeName(){
    cout << "Enter name of recipe: "; cin >> recipeName;
}

void Recipe::getIngredient() {
    char continue;
    void getIngredientName();
    void getUnitOfMeasure();
    void getNumberOfUnits();
    void calories();
    
    cout << "\nWould you like to enter another ingredient?";
    cin >> continue;
    if(continue = 'y') {
        getIngredient(); //recursion
    } else { 
        exit(0);
    }
    return 0;
}