#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        vector<long long> ar(n);

        for (int i = 0; i < n; i++)
            cin >> ar[i];

       

        bool isSorted = is_sorted(ar.begin(), ar.end());
        if (isSorted || k > 1)
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }
}