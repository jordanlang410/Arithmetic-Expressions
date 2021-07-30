/* File Name: plus.h
 * Author: Lang, Jordan
 * Project Name: Project 2 CMSC330
 * Date: 06/28/2021
*/
class Plus : public SubExpression
{
public:
    Plus(Expression* left, Expression* right) :
        SubExpression(left, right)
    {
    }
    //Change to int
    int evaluate()
    {
        return left->evaluate() + right->evaluate();
    }
};