#pragma once

#ifndef RECIPE_H
#define RECIPE_H

/* 
 * File:   recipe.h
 * Author: Joshua.Pierce
 *
 * Created on May 25, 2018, 10:45 AM
 */

#include <iostream>
#include <string>
#include <process.h>
#include "ingredient.h"
using namespace std;

//Define Recipe Class
class Recipe : public Ingredient {
private:
    string recipeName;
    
public:
    Recipe(){} //Recipe constructor.
    void getRecipeName();
    void getIngredient();
};

#endif	// RECIPE_H

