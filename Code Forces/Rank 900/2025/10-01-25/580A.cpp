#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int preNum = 0, count = 0, maxCount = 0;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;

        if (i == 0 || num >= preNum)
        {
            count++;
        }
        else
        {
            maxCount = max(maxCount, count);
            count = 1;
        }
        preNum = num;
    }

    maxCount = max(maxCount, count);

    cout << maxCount << endl;
    return 0;
}
// another approach
//  vector<int> a(n);
//      for (int i = 0; i < n; ++i) {
//          cin >> a[i];
//      }

//     int maxLength = 1;
//     int currentLength = 1;

//     for (int i = 1; i < n; ++i) {
//         if (a[i] >= a[i - 1]) {
//             // jodi current element is greater than or equal to the previous one
//             currentLength++;
//         } else {

//             maxLength = max(maxLength, currentLength);
//             currentLength = 1;
//         }
//     }

// maxLength = max(maxLength, currentLength);

// cout << maxLength << endl;
