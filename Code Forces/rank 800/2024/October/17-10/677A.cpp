#include <iostream>
using namespace std;
int main()
{
    int num, height, count = 0;
    cin >> num >> height;
    int h[num];
    for (int i = 0; i < num; i++)
    {
        cin >> h[i];
    }

    for (int i = 0; i < num; i++)
    {
        if (h[i] <= height)
        {
            count++;
        }
        else if (h[i] > height)
        {
            count = count + 2;
        }
    }

    cout << count;
}