#include <iostream>
using namespace std;
int main()
{
    int n, flag = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int living;
        cin >> living;
        int capacity;
        cin >> capacity;

        if (living == capacity)
        {
            continue;
        }

        else if (living < capacity)
        {
            int dec = capacity - living;
            if (dec >= 2)
            {
                flag++;
            }
        }
    }
    cout << flag;
}