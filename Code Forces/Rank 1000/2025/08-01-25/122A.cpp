// #include <bits/stdc++.h>
// using namespace std;

// int isLucky(int num)
// {

//     while (num > 0)
//     {
//         int digit = num % 10;
//         num = num / 10;
//         if (digit != 4 && digit != 7)
//         {
//             return 0;
//         }
//     }

//     return 1;
// }

// int main()
// {
//     int num;
//     cin >> num;
//     int flag = 0;
//     flag = isLucky(num);
//     if (!flag)
//     {
//         if (num % 4 == 0 || num % 7 == 0)
//         {
//             cout << "YES";
//         }
//         else
//             cout << "NO";
//     }
//     if (flag)
//     {
//         cout << "YES";
//     }
// } 

//////lucky num diye vag kora jaite hbe 47 ba 77 diyeo
//////taile almost lucky hbe so

#include <iostream>
#include <vector>
using namespace std;

int main()
{
     int num;
    cin >> num;

    
    vector<int> luckyNumbers;
    luckyNumbers.push_back(4);
    luckyNumbers.push_back(7);
    luckyNumbers.push_back(44);
    luckyNumbers.push_back(47);
    luckyNumbers.push_back(74);
    luckyNumbers.push_back(77);
    luckyNumbers.push_back(444);
    luckyNumbers.push_back(447);
    luckyNumbers.push_back(474);
    luckyNumbers.push_back(477);
    luckyNumbers.push_back(744);
    luckyNumbers.push_back(747);
    luckyNumbers.push_back(774);
    luckyNumbers.push_back(777);

    for (int i = 0; i < luckyNumbers.size(); i++)
    {
        if (num % luckyNumbers[i] == 0)
        {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}
