/* File Name: conditional.h
 * Author: Lang, Jordan
 * Project Name: Project 2 CMSC330
 * Date: 06/28/2021
*/
class Conditional : public SubExpression
{
public:
	Conditional(Expression* left, Expression* right, Expression* condition) :
		SubExpression(left, right)
	{

		this->condition = condition;
	}
	// Change to int
	int evaluate()
	{

		return condition->evaluate() ? left->evaluate() : right->evaluate();
	}

public:
	//make condition a member of Conditional
	Expression* condition;
};
