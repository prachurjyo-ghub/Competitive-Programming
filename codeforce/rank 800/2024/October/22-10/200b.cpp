#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    double total = 0.0;

    for (int i = 0; i < n; ++i)
    {
        double p;
        cin >> p;
        total = total + p;
    }

    double totalPer = total / 100;

    cout << (totalPer * 100) / n << endl;

    return 0;
}
