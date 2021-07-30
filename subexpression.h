/* File Name: subexpression.h
 * Author: Lang, Jordan
 * Project Name: Project 2 CMSC330
 * Date: 06/28/2021
*/
class SubExpression : public Expression
{
public:
    SubExpression(Expression* left, Expression* right);
    static Expression* parse(stringstream& in); // add parameter
protected:
    Expression* left;
    Expression* right;
};
