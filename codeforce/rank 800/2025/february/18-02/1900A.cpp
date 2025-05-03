#include <bits/stdc++.h>


using namespace std;

/*main jinish hocche j jokhon tana 3 ta '.' dot thakbe
tokhon 2 ta fill korle majher ta auto fill hbe , and
most importantly jokhon already ekta fill ache ba hobe oitake
onno jekono jaygay move kora jabe, mane oi j ekta auto hocche
oita diye baki joto gula ache sob fill hobe but kono
count lagbe na ; count lagbe only jeigula mannually kortechi
r jodi tana 3 ta na pay tahole auto fill hbeo na and sob guila
'.' mannually count kore print korbo

*/
void solve()
{
    int n;
    cin >> n;
    string a;
    cin >> a;
    // jodi manually sob kora lage tao count nicchi
    // and jodi tana 3 ta pay flag use kortechi loop end kore 2 print dibo
    int count = 0;
    int tana_3ta_Dot_ache = 0;
    for (size_t i = 0; i < n; i++)
    {
        if (i + 1 < n && a[i] == '.' && i + 2 < n && a[i] == a[i + 1] && a[i] == a[i + 2])
        {
            tana_3ta_Dot_ache = 1;
            break;
        }
        if (a[i] == '.')
        {
            count++;
        }
    }
    if (tana_3ta_Dot_ache)
    {
        cout << "2\n";
    }
    else

        cout << count << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
