#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;
int main()
{

    string str, strl, stru;
    cin >> str;
    int length = str.size();
    strl = str;
    // sting k lower r upper banabo full
    for (int i = 0; i < length; i++)
    {
        char c = tolower(str[i]);

        strl[i] = c;
    }

    stru = str;

    for (int i = 0; i < length; i++)
    {
        char c = toupper(str[i]);

        stru[i] = c;
    }
    // main string er sathe compare kore upperelement r lower elem berf korbo
    int lowel = 0, upel = 0;

    for (int i = 0; i < length; i++)
    {
        if (strl[i] == str[i])
        {
            lowel++;
        }
    }

    for (int i = 0; i < length; i++)
    {
        if (stru[i] == str[i])
        {
            upel++;
        }
    }
    // print condition wise

    if (lowel >= upel)
    {
        cout << strl;
    }
    else
        cout << stru;
}