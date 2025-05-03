#include <iostream>
using namespace std;
//wrong ans
/*-_- eita buld kora jabe koyta oita jante caiche */
long long solve(string s) {
    long long countDash = 0, countUnderscore = 0;

    
    for (char c : s) {
        if (c == '-') countDash++;
        else if (c == '_') countUnderscore++;
    }

    //  jodi 3 ta na thke ba oi gula r ektao na thake taile hbe na 
    if (countDash == 0 || countUnderscore == 0 || s.size() < 3)
        return 0;

    return countDash * countUnderscore * countDash;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << solve(s) << endl;
    }
    return 0;
}
