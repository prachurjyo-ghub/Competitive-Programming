#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;  
    
    int flag = 0;  
    for (int i = 0; i < n; ++i) {
        int opinion;
        cin >> opinion;
        if (opinion == 1) {
            flag = 1;  
        }
    }
    
    if (flag == 1) {
        cout << "HARD" << endl;
    } else {
        cout << "EASY" << endl;
    }
    
    return 0;
}
