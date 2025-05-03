// #include <bits/stdc++.h>
// using namespace std;


// int main() {
//     long long n, k;
//     cin >> n>>k;
//     vector<long long > finalNum;
    
//     for (int i = 1; i <= n; i += 2) {
//       finalNum.push_back(i);
//     }
   

//     for (int i = 2; i <= n; i += 2) {
//         finalNum.push_back(i);
//     }
//    cout<<finalNum.at(k-1);


// cout << endl;
//     return 0;
    
// }
///////memory limit exceed
#include <iostream>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;

    long long oddCount = (n + 1) / 2; 
    if (k <= oddCount) {
        
        cout << 2 * k - 1 << endl;
    } else {
       
        cout << 2 * (k - oddCount) << endl;
    }

    return 0;
}
