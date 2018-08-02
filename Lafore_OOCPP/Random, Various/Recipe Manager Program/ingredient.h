#pragma once

#ifndef INGREDIENT_H
#define INGREDIENT_H

/* 
 * File:   ingredient.h
 * Author: Joshua.Pierce
 *
 */

#include <iostream>
#include <string>
using namespace std;

//Define Ingredient Class
class Ingredient {
    private:
        string ingredientName;
        string unitOfMeasure;
        int numberOfUnits;
        int caloriesPerUnit;
        int totalCalories;
        
    public:
        Ingredient() {} //constructor (no arguments)
        void getIngredientName();
        void getUnitOfMeasure();
        void getNumberOfUnits();
        void calories(); 
        void ingredientSummary();
};

#endif	// INGREDIENT_H

