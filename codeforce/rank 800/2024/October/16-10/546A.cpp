#include <iostream>
using namespace std;
int main()
{
    int price, money, qunt, total = 0;
    cin >> price >> money >> qunt;

    for (int i = 1; i <= qunt; i++)
    {
        total = (i * price) + total;
    }
    if (total <= money)
    {
        cout << "0";
    }
    else
    {
        cout << total-money;
    }
}