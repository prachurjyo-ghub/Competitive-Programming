#include <bits/stdc++.h>
using namespace std;

/*burte force  */

int main()
{

    int row, col;
    cin >> row >> col;
    int flag = 1;
    for (size_t i = 1; i <= row; i++)
    {
        if (i & 1)
        {
            for (size_t i = 0; i < col; i++)
            {
                cout << "#";
            }
            cout << endl;
        }
        else
        {
            if (flag)
            {
                for (size_t i = 0; i < col - 1; i++)
                {
                    cout << ".";
                }
                cout << "#\n";
                flag = 0;
            }
            else
            {
                cout << "#";
                for (size_t i = 0; i < col - 1; i++)
                {
                    cout << ".";
                }
                cout << endl;
                flag = 1;
            }
        }
    }

    return 0;
}