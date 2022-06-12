#include <bits/stdc++.h>
using namespace std;

char demo(const vector<int> &count)
{
    int max = 0;
    char ch;
    for (int i = 0; i < 26; i++)
    {
        if (count[i] > max)
        {
            max = count[i];
            ch = 'a' + i;
        }
    }
    return ch;
}
int main()
{
    strin
}