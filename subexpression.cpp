/* File Name: subexpression.cpp
 * Author: Lang, Jordan
 * Project Name: Project 2 CMSC330
 * Date: 06/28/2021
*/
#include <iostream>
#include <sstream>

using namespace std;

#include "expression.h"
#include "subexpression.h"
#include "operand.h"
#include "plus.h"
#include "minus.h"
#include "times.h"
#include "divide.h"
#include "equal.h"
#include "and.h"
#include "greaterThan.h"
#include "lessThan.h"
#include "or.h"
#include "not.h"
#include "conditional.h"


SubExpression::SubExpression(Expression* left, Expression* right)
{
	this->left = left;
	this->right = right;
}

Expression* SubExpression::parse(stringstream& cin)
{
	Expression* left;
	Expression* right;
	Expression* conditionLeft;
	Expression* conditionRight;
	Expression* condition;

	char operation, paren, questionmark;

	left = Operand::parse(cin);
	cin >> operation;

	//parse for the conditional operator
	if (operation == ':') {
		right = Operand::parse(cin);
		cin >> questionmark; // parse out questionmark
		conditionLeft = Operand::parse(cin);
		cin >> operation;
		conditionRight = Operand::parse(cin);

		switch(operation) // first evaluate the condition, then return the left or right if true or false
		{
		case '+':
			condition = new Plus(conditionLeft, conditionRight);
			cin >> paren;
			return new Conditional(left, right, condition);

		case '-':
			condition = new Minus(conditionLeft, conditionRight);
			cin >> paren;
			return new Conditional(left, right, condition);

		case '*':
			condition = new Times(conditionLeft, conditionRight);
			cin >> paren;
			return new Conditional(left, right, condition);

		case '/':
			condition = new Divide(conditionLeft, conditionRight);
			cin >> paren;
			return new Conditional(left, right, condition);

		case '=':
			condition = new Equal(conditionLeft, conditionRight);
			cin >> paren;
			return new Conditional(left, right, condition);

		case '&':
			condition = new And(conditionLeft, conditionRight);
			cin >> paren;
			return new Conditional(left, right, condition);

		case '|':
			condition = new Or(conditionLeft, conditionRight);
			cin >> paren;
			return new Conditional(left, right, condition);

		case '>':
			condition = new GreaterThan(conditionLeft, conditionRight);
			cin >> paren;
			return new Conditional(left, right, condition);

		case '<':
			condition = new LessThan(conditionLeft, conditionRight);
			cin >> paren;
			return new Conditional(left, right, condition);
		}

	}

	// If not the conditional operator, perform the below
	else {

		right = Operand::parse(cin);
		cin >> paren;

		switch (operation)
		{
		case '+':
			return new Plus(left, right);

		case '-':
			return new Minus(left, right);

		case '*':
			return new Times(left, right);

		case '/':
			return new Divide(left, right);

		case '=':
			return new Equal(left, right);

		case '&':
			return new And(left, right);

		case '|':
			return new Or(left, right);

		case '>':
			return new GreaterThan(left, right);

		case '<':
			return new LessThan(left, right);
		}
	}
	return 0;
}