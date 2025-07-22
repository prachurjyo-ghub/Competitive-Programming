

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<long long> a;
    for (size_t i = 0; i < 4; i++)
    {
        
        cin >> a[i]; 
    }
    sort(a.begin(), a.end());
    for (size_t i = 0; i < 4; i++)
    {
        cout << a[i] << " ";
    }
    
    
    return 0;
}