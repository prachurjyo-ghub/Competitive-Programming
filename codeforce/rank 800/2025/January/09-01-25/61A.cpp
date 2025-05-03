#include <bits/stdc++.h>
using namespace std;
int main()
{
    string given1, given2;
    cin >> given1 >> given2;

    for (size_t i = 0; i < given1.size(); i++)
    {
        cout << ((given1[i] - '0') ^ (given2[i] - '0'));
    }
    return 0;
}