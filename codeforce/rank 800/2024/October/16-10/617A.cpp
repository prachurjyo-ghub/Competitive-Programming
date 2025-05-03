#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;

    int count = n / 5;
    if (n % 5 < 5 && (n % 5) != 0)
    {
        count += 1;
    }

    cout << count << endl;
}