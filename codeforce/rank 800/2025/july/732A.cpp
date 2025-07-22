#include <iostream>

using namespace std;

/*
     eikhene basically kxi kora hoyeche, jodi k * i er last digit r hoye, tahole i return kore dewa hoyeche.
     r jodi 0 hoye, taholeo i return kore dewa hoye
     eikhane k * i er last digit ber korar jonno % 10 use kora hoyeche.
     eikhane i 1 theke 10 porjonto loop kora hoyeche, karon i 1 theke 10 porjonto hole
     k * i er last digit 0 ba r hote pare.
*/

int main()
{
    int k, r;
    cin >> k >> r;
    for (int i = 1; i <= 10; i++)
    {
        if ((k * i) % 10 == r || (k * i) % 10 == 0)
        {
            cout << i << endl;
            return 0;
        }
    }

    return 0;
}