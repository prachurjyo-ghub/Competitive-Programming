#include <iostream>
using namespace std;
    /*frist matche er spectetor 2nd match khelbei and 
    3rd match eo khelbe but k jite jituk 2nd match khelar por 1st matche 
    er player continue korbe na temni 3rd match er por abr 1st match er 
    spectetor spect korbe  */
void solve() {
    int t;
    cin >> t;
    
    while (t--) {
        long long k; 
        cin >> k;
        
        if (k % 3 == 1) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    solve();
    return 0;
}
