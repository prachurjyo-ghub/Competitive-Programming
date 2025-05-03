#include <iostream>
using namespace std;

int main() {
    int T; 
    cin >> T;
    while (T--) {
        int N, A, B; 
        cin >> N >> A >> B;

       
        if ((A % 2) == (B % 2)) {
            cout << "YES\n"; 
        } else {
            cout << "NO\n"; 
        }
    }

    return 0;
}
