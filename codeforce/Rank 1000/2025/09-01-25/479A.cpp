#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int maxRes = 0;
    int temp = a + b * c;
    if (temp > maxRes)
    {
        maxRes = temp;
    }
    temp = a * (b + c);
    if (temp > maxRes)
    {
        maxRes = temp;
    }
    temp = (a + b) * c;
    if (temp > maxRes)
    {
        maxRes = temp;
    }
    temp = a * b + c;
    if (temp > maxRes)
    {
        maxRes = temp;
    }
    temp = a * b * c;
    if (temp > maxRes)
    {
        maxRes = temp;
    }
    temp = a + b + c;
    if (temp > maxRes)
    {
        maxRes = temp;
    }
    temp = a + (b * c);
    if (temp > maxRes)
    {
        maxRes = temp;
    }
    temp = (a * b) + c;
    if (temp > maxRes)
    {
        maxRes = temp;
    }
    cout << maxRes;
}