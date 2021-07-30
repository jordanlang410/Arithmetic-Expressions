/* File Name: symboltable.h
 * Author: Lang, Jordan
 * Project Name: Project 2 CMSC330
 * Date: 06/28/2021
*/
class SymbolTable
{
public:
    SymbolTable() {}
    // Change to int
    void insert(string variable, int value);

    // Change to int
    int lookUp(string variable) const;

    void removeVariables();

private:
    struct Symbol
    {
        // Change to int
        Symbol(string variable, int value)
        {
            this->variable = variable;
            this->value = value;
        }
        string variable;

        // Change to int
        int value;
    };
    vector <Symbol> elements;
};
