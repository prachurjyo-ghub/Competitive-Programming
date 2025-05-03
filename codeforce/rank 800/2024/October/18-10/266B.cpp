#include <iostream>
#include <string>
using namespace std;
int main()
{
    int total, n;
    cin >> total >> n;

    string s, news;
    cin >> s;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < s.size(); j++)
        {

            if (s[j] == 'B' && s[j + 1] == 'G')
            {
                s[j] = 'G';
                s[j + 1] = 'B';

                j++;
            }
        }
    }
    cout << s;
}
