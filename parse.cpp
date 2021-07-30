/* File Name: parse.cpp
 * Author: Lang, Jordan
 * Project Name: Project 2 CMSC330
 * Date: 06/28/2021
*/
#include <cctype> 
#include <iostream> 
#include <string> 
#include <sstream>

using namespace std;

#include "parse.h"

string parseName(stringstream& cin)
{
    char alnum;
    string name = "";

    cin >> ws;
    while (isalnum(cin.peek()))
    {
        cin >> alnum;
        name += alnum;
    }
    return name;
}