/* File Name: operand.h
 * Author: Lang, Jordan
 * Project Name: Project 2 CMSC330
 * Date: 06/28/2021
*/
class Operand : public Expression
{
public:
    static Expression* parse(stringstream& in);
};
