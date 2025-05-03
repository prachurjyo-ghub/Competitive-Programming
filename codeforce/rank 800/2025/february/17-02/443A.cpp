#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    set<char> letters;

    for (char c : s)
    {
        if (islower(c))
        {
            letters.insert(c);
        }
    }

    cout << letters.size() << endl;
    return 0;
}
