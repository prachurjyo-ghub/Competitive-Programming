#include <iostream>
#include <vector>
using namespace std;

int main() {
    int health , n;
    cin >> health >> n;
    vector<pair<int,int>> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].first >> arr[i].second;
    }
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++)
    {
if (health <= arr[i].first) {
            cout << "NO" << endl;
            return 0;
        } else {
            health += arr[i].second;
        }
        if (i == n - 1) {
            cout << "YES" << endl;
            return 0;
        }
        
    }
    
    
    return 0;
}