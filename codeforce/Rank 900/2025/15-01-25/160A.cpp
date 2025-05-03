#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int coins[n];
    int sum = 0;
    for (size_t i = 0; i < n; i++)
    {
        cin >> coins[i];
        sum += coins[i];
    }

    //sort korar lagbe nahle order er jonne mara khbo
    sort(coins, coins + n, greater<int>());

    int count = 0;
    int forMe = 0;
    int targetAmount = sum / 2; 
    for (int i = 0; i < n; i++)
    {
        forMe += coins[i];
        count++;
        if (forMe > targetAmount)
            break;
    }

    cout << count << endl;
    return 0;
}
