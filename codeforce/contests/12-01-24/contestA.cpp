#include <iostream>
#include <string>
using namespace std;

int main()
{
    int test;
    cin >> test;

    while (test--)
    {
        string s, t;
        int totalTime = 0;
        cin >> s >> t;

        int sm_ele = 0;
        int lengthS = s.size();
        int lengthT = t.size();

        for (int i = 0; i < lengthS; i++)
        {
            if (s[i] == t[i])
            {
                sm_ele++;
            }
            else
            {
                break;
            }
        }

        if (sm_ele == 0)
        {
            totalTime = lengthS + lengthT;
        }

        if (sm_ele != 0)
        {
            totalTime = lengthS + 1 + (lengthT - sm_ele);
        }

        cout << totalTime << endl;
    }

    return 0;
}
