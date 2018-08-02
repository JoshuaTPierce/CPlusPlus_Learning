#include <iostream>
#include <process.h>
using namespace std;

void Ingredient::getIngredientName(){
    cout >> "Enter ingredient name: "; cin >> ingredientName; 
}

void Ingredient::getUnitOfMeasure() {
    cout << "\nSelect a unit of measurement. Choices are: ";
    cout << "\ntsp"; 
    cout << "\ntbsp";
    cout << "\ncup";
    cout << "\ngram";
    cout << "\nounce";
    cout << "\nfloz"; //fluid ounces
        cin >> unitOfMeasure;
        if {
            switch(unitOfMeasure){
                case 'tsp': cout << "You have selected teaspoons."; continue;
                case 'tbsp': cout << "You have selected tablespoons."; continue;
                case 'cup': cout << "You have selected cups."; continue;
                case 'gram': cout << "You have selected grams."; continue;
                case 'ounce': cout << "You have selected ounces."; continue;
                case 'floz': cout << "You have selected fluid ounces"; continue;
                default cout << "Please enter a valid unit."; break;
        }
    }
}   

void Ingredient::getNumberOfUnits(){
    cout << "\nHow many units of " << ingredientName << " will you be using?";
    cin >> numberOfUnits;
    cout << endl;
}

void Ingredient::calories(){
    cout << "\nHow many calories are in one " << unitOfMeasure << " of " << ingredientName << " ?";
    cin >> caloriesPerUnit;
    cout >> endl;
    totalCalories = caloriesPerUnit * numberOfUnits;
}

void Ingredient::ingredientSummary(){
    cout << "\nYou have entered " << numberOfUnits << unitOfMeasure << " of " << ingredientName 
            << " which contains " << totalCaories << " total calories." << endl;
}