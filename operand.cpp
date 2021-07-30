/* File Name: operand.cpp
 * Author: Lang, Jordan
 * Project Name: Project 2 CMSC330
 * Date: 06/28/2021
*/
#include <cctype>
#include <iostream>
#include <list>
#include <string>
#include <sstream>

using namespace std;

#include "expression.h"
#include "subexpression.h"
#include "operand.h"
#include "variable.h"
#include "literal.h"
#include "parse.h"


Expression* Operand::parse(stringstream& cin)
{
    char paren;

    // Change to int
    int value;

    cin >> ws;
    if (isdigit(cin.peek()))
    {
        cin >> value;
        Expression* literal = new Literal(value);
        return literal;
    }
    if (cin.peek() == '(')
    {
        cin >> paren;
        return SubExpression::parse(cin);
    }
    else
        return new Variable(parseName(cin));
    return 0;
}