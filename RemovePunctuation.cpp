#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, len;
    string str = "HELLO???@@##$#$% HOW%$^ ARE$%^ YOU";
    for (i = 0, len = str.size(); i < len; i++)
    {
        if (ispunct(str[i]))
        {
            str.erase(i, 1);
            i--;
            len = str.size();
        }
    }
    cout << str;

    return 0;
}

// takes a string (object) input from the user and removes all characters except alphabets.
#include <iostream>
using namespace std;

int main()
{
    string line;
    string temp = "";

    cout << "Enter a string: ";
    getline(cin, line);

    for (int i = 0; i < line.size(); i++)
    {
        if ((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z'))
        {
            temp = temp + line[i];
        }
    }
    line = temp;
    cout << "Output String: " << line;
    return 0;
}