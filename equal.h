/* File Name: equal.h
 * Author: Lang, Jordan
 * Project Name: Project 2 CMSC330
 * Date: 06/28/2021
*/
class Equal : public SubExpression
{
public:
	Equal(Expression* left, Expression* right) :
		SubExpression(left, right)
	{
	}
	// Change to int
	int evaluate()
	{

		return left->evaluate() == right->evaluate();
	}
};