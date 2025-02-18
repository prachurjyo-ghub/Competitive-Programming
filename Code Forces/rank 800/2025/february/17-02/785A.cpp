#include <bits/stdc++.h>
using namespace std;
int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    int count = 0;
    while (t--)
    {
        string given;
        cin >> given;

        if (given == "Tetrahedron")
        {
            count += 4;
        }
        else if (given == "Cube")
        {
            count += 6;
        }
        else if (given == "Octahedron")
        {
            count += 8;
        }
        else if (given == "Dodecahedron")
        {
            count += 12;
        }
        else if (given == "Icosahedron")
        {
            count += 20;
        }
    }
    cout << count;
}