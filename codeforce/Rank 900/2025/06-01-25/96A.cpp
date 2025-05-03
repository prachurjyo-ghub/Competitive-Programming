#include <bits/stdc++.h>
using namespace std;

int main() {
    string given;
    cin >> given;

    int count = 1; 
    for (int i = 1; i < given.length(); i++) {
        if (given[i] == given[i - 1]) {
            count++; 
            if (count == 7) { 
                cout << "YES\n";
                return 0;
            }
        } else {
            count = 1; 
        }
    }

    cout << "NO\n"; 
    return 0;
}
