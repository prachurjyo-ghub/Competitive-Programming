#include <iostream>
using namespace std;
int main()
{

    string s;
    int countA = 0, countD = 0, n;

    cin >> n;
   
      cin >> s;
    

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
        {
            countA++;
        }
        else if (s[i] == 'D')
        {
            countD++;
        }
    }

    if (countA > countD)
    {
        cout << "Anton";
    }
    else if (countA < countD)
    {
        cout << "Danik";
    }
    else if (countA == countD)
    {
        cout << "Friendship";
    }
}
