#include <bits/stdc++.h>
using namespace std;

/* a+b = n  and  a>b
now a = n-b  and if a>b so n-b aslo > b (as a = n-b and a>b )
now n-b  > b  -> n> 2b   -> n/2 > b
So all valid values of b are from 1 up to just below  n/2 > b*/

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        cout << (n - 1) / 2 << endl;
    }
    return 0;
}
