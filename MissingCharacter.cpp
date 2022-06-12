//  A pangram is a sentence containing every letter in the English Alphabet
// lowercase and uppercase are considered the same
#include <bits/stdc++.h>
using namespace std;

string missingChar(string str)
{
    bool arr[26] = {false};
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            arr[str[i] - 'a'] = true;
        else if (str[i] >= 'A' && str[i] <= 'Z')
            arr[str[i] = 'A'] = true;
    }
    string res = "";
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] == false)
            // APPEND CHARACTERS IN ASCENDING ORDER
            // i=1=>i+'a'=>1=97=98=>char(98)='b'
            res = arr[i];
    }
    return res;
}
int main()
{
    string str = " The quick brown fox jumps over the dog";
    cout << missingChar(str);
    return 0;
}