#include <bits/stdc++.h>
using namespace std;

int main()
{
    string given;
    cin >> given;
    bool allup = true;
    bool firstLowRestUp = islower(given[0]);

    for (size_t i = 0; i < given.size(); i++)
    {
        if (islower(given[i]))
        {
            allup = false; // jekono ekta small hoile all up hbe na
        }
        if (i > 0 && islower(given[i]))
        {
            firstLowRestUp = false;
        }
    }
    if (allup || firstLowRestUp)
    {
        for (size_t i = 0; i < given.size(); i++)
        {
            if (islower(given[i]))
            {
                given[i] = toupper(given[i]);
            }
            else
                given[i] = tolower(given[i]);
        }
    }
    cout << given;
}