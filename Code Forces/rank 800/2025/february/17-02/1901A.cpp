#include <bits/stdc++.h>
using namespace std;

/*proti bar jei distance par korbe eigular moddhe jeita max 
oituk capacity thaklei hbe 
special catch last stop a thamte parbe na 
tai oitar belay double distance par korbe 

*/


int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int last = 0;
        int res = INT_MIN;
        int n, x;
        cin >> n >> x;
        for (size_t i = 0; i < n; i++)
        {

            int point;
            cin >> point;
            if (i == (n - 1))
            {
                int temp = 2 * (abs(x - point));
                if (temp > res)
                {
                    res = temp;
                }
            }
            int temp1 = point - last;
            if (temp1 > res)
            {
                res = temp1;
            }
            last = point;
        }
        // cout<<"out  \n";
        cout << res << endl;
    }
}