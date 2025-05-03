#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    if (num / 100 == 7 || (num / 10) % 10 == 7 || num % 10 == 7) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
