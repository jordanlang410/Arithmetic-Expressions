/* File Name: lessThan.h
 * Author: Lang, Jordan
 * Project Name: Project 2 CMSC330
 * Date: 06/28/2021
*/
class LessThan : public SubExpression
{
public:
	LessThan(Expression* left, Expression* right) :
		SubExpression(left, right)
	{
	}
	// Change to int
	int evaluate()
	{
		return left->evaluate() < right->evaluate();
	}
};
