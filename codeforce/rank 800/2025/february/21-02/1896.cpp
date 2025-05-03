#include <bits/stdc++.h>
using namespace std;

/* first er ta 1 hoile baki sob e move kora jabe condition onu jayee just 
a1 e move hoy na karon a2 and a3 swap hoilei ekbareo a1 swap hbe na 
tai oita 1 hoile game ses  */

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