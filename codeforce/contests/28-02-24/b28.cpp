#include <iostream>
using namespace std;
/*emon permutation banaite hbe jno jekono position a tar ager elements gula jog korle
kono square number na hoy like 4,9 jodio sample output er sathe mile na
but likha ache last a j f there are multiple solutions, print any of them.*/
void solve()
{
    int n;
    cin >> n;

    if (n == 1)
    {
        cout << "-1\n";
        return;
    }

    int perm[n + 1];

    // ekbar bejor jabe ekbar jor even odd r ki
    for (int i = 1; i <= n - 1; i += 2)
    {
        perm[i] = i + 1;
        perm[i + 1] = i;
    }

    // large number er jonne ses er 2 ta swap korbo jodi n odd hoy
    // n even hoile to pera nai ekta even ekta odd korbo but odd hoile last e 2 ta odd cole ase
    // tai eita kora
    if (n % 2 == 1)
    {
        perm[n - 2] = n;
        perm[n] = n - 1;
    }

    for (int i = 1; i <= n; i++)
    {
        cout << perm[i] << " ";
    }
    cout << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
