#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int groupOf4 = 0;
    int groupOf3 = 0;
    int groupOf2 = 0;
    int groupOf1 = 0;

    for (size_t i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        if (num == 1)
        {
            groupOf1++;
        }
        else if (num == 2)
        {
            groupOf2++;
        }
        else if (num == 3)
        {
            groupOf3++;
        }
        else if (num == 4)
        {
            groupOf4++;
        }
    }
    int taxi = groupOf4; // 4 ta kore jabe

    if (groupOf1 >= groupOf3)
    {
        // 3 r 1 ta kore jabe
        // 1 er poriman beshi hoile extra 1 er grp a thkbe
        taxi += groupOf3;
        groupOf1 = groupOf1 - groupOf3;
    }
    else
    { // 3 er grp beshi hoile 1 niye kono vejal nai .
        // 3 r 1 pair korbe
        taxi = taxi + groupOf3;
        groupOf1 = 0;
    }

    // handeling 2 er grp and rest 1s
    taxi = taxi + (groupOf2 / 2);
    if (groupOf2 % 2 == 1)
    {
        // mane 2 er grp ekta ache r
        // karon baki gula already cole geche div (/) 2 kore
        if (groupOf1 >= 2)
        {
            // 1 er grp theke 2 ta diye dibo
            groupOf1 = groupOf1 - 2;
            taxi = taxi + 1;
        }
        else
        {
            taxi++;
            groupOf1 = 0;
        }
    }

    if (groupOf1 != 0)
    {
        taxi = taxi + (ceil((float)groupOf1 / 4));
    }

    cout << taxi;
}