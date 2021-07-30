/* File Name: variable.cpp
 * Author: Lang, Jordan
 * Project Name: Project 2 CMSC330
 * Date: 06/28/2021
*/
#include <strstream>
#include <vector>
using namespace std;

#include "expression.h"
#include "operand.h"
#include "variable.h"
#include "symboltable.h"

extern SymbolTable symbolTable;

// Change to int
int Variable::evaluate()
{
    return symbolTable.lookUp(name);
}