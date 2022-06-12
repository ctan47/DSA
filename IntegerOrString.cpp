#include <iostream>
using namespace std;

bool isnumber(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (isdigit(s[i]) == false)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}
int main()
{
    string s = "kkjdfklef";
    if (!isnumber(s))
    {
        cout << "GIVEN STRING " << s << " Is a string";
    }
    else
    {
        cout << "GIVEN STRING" << s << " Is not a string";
    }
}