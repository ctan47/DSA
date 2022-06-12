// #include <iostream>
// using namespace std;

// bool IsSame(string str)
// {
//     for (int i = 0; i < str.length(); i++)
//     {
//         if (str[i] != str[0])
//         {
//             return false;
//         }
//     }
//     return true;
// }
// int main()
// {
//     string str = "ggggsdhsaggg";
//     if (IsSame(str))
//     {
//         cout << "ALL ARE SAME ";
//     }
//     else
//     {
//         cout << "ALL ARE NOT SAME ";
//     }
// }

// find_first_not_of() in C++ STL.

// #include <iostream>
// using namespace std;

// bool IsSame(string str)
// {
//     return (str.find_first_not_of(str[0]) == string::npos);
// }
// int main()
// {
//     string str = "ggjkggg";
//     if (IsSame(str))
//     {
//         cout << "ALL SAME ";
//     }
//     else
//     {
//         cout << "NOT SAME ";
//     }
// }

// USING SET .[IF THE SIZE OF THE SET IS 1 IT MEANS THE SET CONTAINS ALL SAME CHAR VALUES]
#include <bits/stdc++.h>
using namespace std;

void IsSame(string str)
{
    set<char> s1;
    for (int i = 0; i < str.length(); i++)
    {
        s1.insert(str[i]);
    }

    if (s1.size() == 1)
    {
        cout << "YES ALL SAME";
    }
    else
    {
        cout << "ALL NOT SAME ";
    }
}

int main()
{

    string str = "usuhdieud";
    string str1 = "ggggg";
    IsSame(str1);

    return 0;
}