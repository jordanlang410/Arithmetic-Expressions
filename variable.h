/* File Name: variable.h
 * Author: Lang, Jordan
 * Project Name: Project 2 CMSC330
 * Date: 06/28/2021
*/
class Variable : public Operand
{
public:
    Variable(string name)
    {
        this->name = name;
    }
    // Change to int
    int Variable::evaluate();
private:
    string name;
};