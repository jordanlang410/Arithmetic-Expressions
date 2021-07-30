/* File Name: literal.h
 * Author: Lang, Jordan
 * Project Name: Project 2 CMSC330
 * Date: 06/28/2021
*/
class Literal : public Operand
{
public:

    // Change to int
    Literal(int value)
    {
        this->value = value;
    }
    // Change to int
    int evaluate()
    {
        return value;
    }
private:

    // Change to int
    int value;
};
