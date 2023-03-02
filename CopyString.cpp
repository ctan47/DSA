#include <iostream>
using namespace std;
void mycopy(char s1[], char s2[])
{
    for (int i = 0; s1[i] != '\0'; i++)
    {
        s2[i] = s1[i];
    }
}
int main()
{
    char s1[100] = "HEYHOWAREYOU";
    char s2[100] = " ";
    mycopy(s1, s2);
    cout << "STRING SECOND : " << s2;

    return 0;
}

// USING RECURSIVE FUNCTION

void mycopy(char s1[], char s2[], int i)
{

    if (s1[i] != '\0')
    {
        s2[i] = s1[i];
    }
    else
    {
        return;
    }

    mycopy(s1, s2, i + 1);
}
int main()
{
    char s1[100] = "HEYHOWAREYOU";
    char s2[100] = " ";
    mycopy(s1, s2, 0);
    cout << "Second string : " << s2;
    return 0;
}

/* same code  Using <string> header file 
#include <iostream>
#include <string>

void mycopy(const std::string& s1, std::string& s2)
{
    s2 = s1;
}

int main()
{
    std::string s1 = "HEYHOWAREYOU";
    std::string s2;
    mycopy(s1, s2);
    std::cout << "Second string: " << s2 << std::endl;
    return 0;
}
*/
