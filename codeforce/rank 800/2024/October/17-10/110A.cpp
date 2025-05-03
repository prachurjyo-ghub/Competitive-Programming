#include <iostream>
using namespace std;
int main()
{

    long long n;
    cin >> n;
    int count = 0;

    while (n != 0)
    {
        int last = n % 10;
        if (last == 4 || last == 7)
        {
            count++;
        }
        n = n / 10;
    }

    if (count == 4 || count == 7)
    {
        cout << "YES";
    }
    else
        cout << "NO";
}