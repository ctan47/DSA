//  A pangram is a sentence containing every letter in the English Alphabet
// lowercase and uppercase are considered the same
#include <bits/stdc++.h>
using namespace std;
bool checkPanagram(string str)
{
    // a boolea vector mark of size 26 with intitial value as false
    vector<bool> mark(26, false);
    int index;
    for (int i = 0; i < str.length(); i++)
    {
        // suppose  char is M then M=M-A[ascii value is subtracted]=77-65=12[we get m index as 12 and we will mark it true]
        if ('A' <= str[i] && str[i] <= 'Z')
            index = str[i] - 'A';
        // m=m-a=109-97=12
        else if ('a' <= str[i] && str[i] <= 'z')
            index = str[i] - 'a';
        // if char is other then those 26 char then leave and go to next
        else
            continue;
        mark[index] = true;
    }

    for (int i = 0; i < 25; i++)
    {
        if (mark[i] == false)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    string str = "Waltz, bad nymph, for quick jigs vex.";
    if (checkPanagram(str) == true)
    {
        cout << str << "  : "
             << "is a panagram";
    }
    else
        cout << str << "  : "
             << "is not a panagram";
}