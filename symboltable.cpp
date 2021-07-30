/* File Name: symboltable.cpp
 * Author: Lang, Jordan
 * Project Name: Project 2 CMSC330
 * Date: 06/28/2021
*/
#include <string> 
#include <vector> 

using namespace std;

#include "symboltable.h"

void SymbolTable::removeVariables()  // use to pop the x and y value back so as to take new inputs
{
    if (elements.size() > 0) {
        for (int i = elements.size(); i > 0; i--) {
            elements.pop_back(); // delete elements
        }
    }
}

// Change to int
void SymbolTable::insert(string variable, int value)
{
    const Symbol& symbol = Symbol(variable, value);
    elements.push_back(symbol);
}

// Change to int
int SymbolTable::lookUp(string variable) const
{
    for (int i = 0; i < elements.size(); i++)
        if (elements[i].variable == variable)
            return elements[i].value;
    return -1;
}

