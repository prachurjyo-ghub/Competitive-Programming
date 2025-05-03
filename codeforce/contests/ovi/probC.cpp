#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;  // number of test cases
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int arr[200005];

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        // 1. Calculate the difference between the first and last element
        int result = arr[n-1] - arr[0];

        // 2. Consider setting the entire array to either arr[0] or arr[n-1]
        for (int i = 1; i < n; i++) {
            // Change the array to arr[0] or arr[n-1], whichever minimizes the difference
            result = min(result, arr[n-1] - arr[i]);  // Replace all except the first one
            result = min(result, arr[i-1] - arr[0]);  // Replace all except the last one
        }

        // 3. Minimize by checking adjacent element differences
        for (int i = 1; i < n; i++) {
            result = min(result, arr[i-1] - arr[i]);
        }

        cout << result << endl;
    }

    return 0;
}
