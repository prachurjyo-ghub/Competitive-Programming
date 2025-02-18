#include <bits/stdc++.h>
using namespace std;

/* problem tay ekjoner por ekjoner turn asbe
and suru korbo 1st jon . operation 2 tai +1 or -1 kora
and 10 operation er vitor n%3==0 korte parle 1st person win
nahle 2nd person jitbe ;
 ekhon 2 jonei jehetu
jitte jacche n er upr sob depend korteche .
jodi n%3==(3 ta jinsh hoite pare 0/1/2)
lets see n%3==2
mane n= 2,5,8,11 era . jehetu vanya mane 1st person
khela suru korteche oy + 1 korlei jitbe
now n%3==1 eita mane n=1,4,7... era jehetu vanya 1st
oy jodi -1 kore tailei n%3==0 hoy and jitbe
  now n%3==0 hoile vanya +1 koruk or -1 koruk
  2nd person or copunter korle r 1st person jitte parbe
  na karon 2 jonei to jitte cacche */

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        if (n % 3 == 2)
        {
            cout << "First\n";
        }
        else if (n % 3 == 1)
        {
            cout << "First\n";
        }
        else
            cout << "Second\n";
    }
    return 0;
}