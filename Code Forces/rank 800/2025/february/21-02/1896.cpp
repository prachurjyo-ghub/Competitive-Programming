#include <bits/stdc++.h>
using namespace std;

/* */

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int flag = 0;
        vector<int> ar(n);
        for (size_t i = 0; i < n; i++)
        {
            cin >> ar[i];
            
        }
        if (ar[0] == 1)
            {
                cout << "YES\n";
            }
        
        else
            cout << "NO\n";
    }
    return 0;
}