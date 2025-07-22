#include <iostream>

using namespace std;
/*  381A - Sereja and Dima
eikhene Sereja and Dima dui jone ekbar kore pick korbe,
jekhane Sereja shuru korbe, Sereja shuru korle Sereja shobcheye boro element pick korbe,
ar Dima shuru korle Dima shobcheye boro element pick korbe.
Sereja and Dima er pick kora element er sum ber korte hobe.
*/

int main()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    int sj = 0, dm = 0;
    int l = 0, r = n - 1;
     bool turn = true;
    while (l <= r)
    {
        int picked;
       
        if (ar[l] > ar[r])
        {
            picked = ar[l];
            l++;
        }
        else
        {
            picked = ar[r];
            r--;
        }

        if (turn)
        {
            sj += picked;
        }
        else
        {
            dm += picked;
        }

        turn = !turn;
    }
    cout << sj << " " << dm << endl;
    return 0;
}