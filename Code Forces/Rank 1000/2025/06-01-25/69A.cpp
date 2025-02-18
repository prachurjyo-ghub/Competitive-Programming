#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int sumOfX = 0, sumOfY = 0, sumOfZ = 0;
    
    for (int i = 0; i < n; i++) {
        int x, y, z;
        cin >> x >> y >> z;
        
        sumOfX += x;
        sumOfY += y;
        sumOfZ += z;
    }
    
    if (sumOfX == 0 && sumOfY == 0 && sumOfZ == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}
