#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int max_pos = 0, min_pos = 0;
    int max_height = INT_MIN, min_height = INT_MAX;

    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;

        if (a > max_height)
        {
            max_height = a;
            max_pos = i;
        }

        if (a <= min_height)
        {
            min_height = a;
            min_pos = i;
        }
    }

    // highest to 1 a jabe 0 te na tai
    // oke toto ghor e agaite hbe jotot ghor piche ache oy
    // min er belay oke last a jaite hbe toto ghor
    // joto ghor dure ache last theke
    int swaps_needed = (max_pos - 1) + (n - min_pos);

    // jodi age min and pore high ashe
    // tahole to high k move korar time ei min ekbar move hobe
    // tar jonne eita condition diye oita maintain kora hocche
    // jeita 2nd test case a hoiche
    // amne count korle 11 hoy but ektake ekbar agei move kora hoiche jonne
    // 10 hoiche mane ekta rektate cross korar time a
    if (max_pos > min_pos)
    {
        swaps_needed--;
    }

    cout << swaps_needed << endl;

    return 0;
}
