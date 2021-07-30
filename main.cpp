/* File Name: main.cpp
 * Author: Lang, Jordan
 * Project Name: Project 2 CMSC330
 * Date: 06/28/2021
*/
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <fstream>

using namespace std;

#include "expression.h"
#include "subexpression.h"
#include "symboltable.h"
#include "parse.h"


SymbolTable symbolTable;

void parseAssignments(stringstream& cin);

int main()
{
    Expression* expression;
    char paren, comma;
    std::string inputLine_; // create string variable

    ifstream file_("testCase1.txt"); // file to be input

    // check if the file is open
    if (file_.is_open()) { 

        // use overloaded function to read line by line and trans into varriable
        while (getline(file_, inputLine_)) 
        {

            symbolTable.removeVariables();

            stringstream cin(inputLine_);

            cin >> paren;
            std::cout << inputLine_ << '\n';

            expression = SubExpression::parse(cin);
            cin >> comma;

            parseAssignments(cin);
            // print out expression result
            std::cout << "This expression = " << expression->evaluate() << endl << endl;

        }
        file_.close();
    }
    else {
        std::cout << "We were unable to open the file. Please try again." << '\n';
    }

    return 0;
}

void parseAssignments(stringstream& cin)
{
    char assignop, delimiter;
    string variable;

    // Change to int
    int value;
    do
    {
        variable = parseName(cin);
        cin >> ws >> assignop >> value >> delimiter;
        symbolTable.insert(variable, value);
    } 
    while (delimiter == ',');
}