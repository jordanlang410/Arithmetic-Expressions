/* File Name: divide.h
 * Author: Lang, Jordan
 * Project Name: Project 2 CMSC330
 * Date: 06/28/2021
*/
class Divide : public SubExpression
{
public:
	Divide(Expression* left, Expression* right) :
		SubExpression(left, right)
	{
	}
	// Change to int
	int evaluate()
	{
		return left->evaluate() / right->evaluate();
	}
};
