#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int evenCount = 0, oddCount = 0;
    int posOfLastEven = 0, posOfLastodd = 0;
    for (size_t i = 1; i <= n; i++)
    {

        int num;
        cin >> num;
        if (num % 2 == 0)
        {
            evenCount++;
            posOfLastEven = i;
        }
        else
        {
            oddCount++;
            posOfLastodd = i;
        }
    }

    if (evenCount > oddCount)
    {
        cout << posOfLastodd;
    }
    else
        cout << posOfLastEven;
}