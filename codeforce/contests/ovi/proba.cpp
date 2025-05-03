#include <iostream>
using namespace std;
int main()
{
    int n, flag = 0;
    cin >> n;

    for (int i = 0; i < 3; i++)
    {
        int last = n % 10;
        if (last == 7)
        {
            flag = 1;
            break;
        }
        n = n / 10;
    }
    if (flag == 1)
    {
        cout << "YES";
    }
    else if (flag == 0)
    {
        cout << "NO";
    }
}