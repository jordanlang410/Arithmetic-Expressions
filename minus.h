/* File Name: minus.h
 * Author: Lang, Jordan
 * Project Name: Project 2 CMSC330
 * Date: 06/28/2021
*/
class Minus : public SubExpression
{
public:
	Minus(Expression* left, Expression* right) :
		SubExpression(left, right)
	{
	}
	// Change to int
	int evaluate()
	{
		return left->evaluate() - right->evaluate();
	}
};

