#include <iostream>
#include <algorithm>
using namespace std;
int main()
{

    string s, t, revS;
    cin >> s >> t;
    revS = s;
    int flag = 0;

    reverse(revS.begin(), revS.end());
    for (int i = 0; i < t.size(); i++)
    {
        if (t[i] == revS[i])
        {
            flag = 1;
        }
        else
        {
            flag = 0;
            break;
        }
    }
    if (t.size() != s.size())
    {
        flag = 0;
    }

    if (flag == 0)
    {
        cout << "NO";
    }
    else
        cout << "YES";
}