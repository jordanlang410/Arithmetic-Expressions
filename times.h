/* File Name: times.h
 * Author: Lang, Jordan
 * Project Name: Project 2 CMSC330
 * Date: 06/28/2021
*/
class Times : public SubExpression
{
public:
	Times(Expression* left, Expression* right) :
		SubExpression(left, right)
	{
	}
	int evaluate()
	{
		return left->evaluate() * right->evaluate();
	}
};
