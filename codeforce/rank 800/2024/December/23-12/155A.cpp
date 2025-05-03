#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n; 

    vector<int> points(n);
    for (int i = 0; i < n; i++) {
        cin >> points[i];
    }

    int count = 0; 
    int maxScore = points[0]; 
    int minScore = points[0]; 

    
    for (int i = 1; i < n; i++) {
        if (points[i] > maxScore) { 
            count++;
            maxScore = points[i];
        } else if (points[i] < minScore) { 
           count++;
            minScore = points[i];
        }
    }

    cout << count << endl; 
    return 0;
}
