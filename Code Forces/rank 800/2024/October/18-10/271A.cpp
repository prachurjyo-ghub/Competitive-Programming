#include <iostream>
using namespace std;
int main()
{

    int y;
    cin >> y;

    for (int year = y + 1;; year++)
    {
        int a = year / 1000;
        int b = (year / 100) % 10;
        int c = (year / 10) % 10;
        int d = year % 10;

        // check if digits are distinct

        if (a != b && a != c && a != d && b != c && b != d && c != d)
        {
            cout << year;
            break;
        }
    }

    return 0;
}
