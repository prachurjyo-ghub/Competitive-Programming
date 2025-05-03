#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
    int n, p, x;
    cin >> n;  
    cin >> p;  

    unordered_set<int> levels; 
    for (int i = 0; i < p; ++i) {
        cin >> x;
        levels.insert(x);  
    }

    int q;
    cin >> q; 
    for (int i = 0; i < q; ++i) {
        cin >> x;
        levels.insert(x);  
    }

    
    if (levels.size() == n) {
        cout << "I become the guy." << endl;
    } else {
        cout << "Oh, my keyboard!" << endl;
    }

    return 0;
}
