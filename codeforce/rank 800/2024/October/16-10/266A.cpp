#include <iostream>
using namespace std;
int main()
{
    char stone[50];
    int n, count = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> stone[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (stone[i] == stone[i + 1])
        {
            count++;
        }
    }
    cout << count;
}