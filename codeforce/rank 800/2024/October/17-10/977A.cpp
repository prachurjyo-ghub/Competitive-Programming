#include <iostream>
using namespace std;
int main()
{

    int num, n;
    cin >> num >> n;

    if (num >= 2)
    {
        for (int i = 0; i < n; i++)
        {
            int last = num % 10;

            if (last != 0)
            {
                last--;
                num--;
            }
            else if (last == 0)
            {
                num = num / 10;
            }
        }
        cout << num;
    }
    else
        cout << 1;
}