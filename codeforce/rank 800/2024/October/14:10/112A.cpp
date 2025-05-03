#include <iostream>
#include<algorithm>
#include<cctype> 
using namespace std;
int main()
{
    string str1;
    string str2;
    cin >> str1;
    cin >> str2;
    int flag = 0;
    int length1 = str1.size();
    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);

    for (int i = 0; i < length1; i++)
    {
        if (str1[i] < str2[i])
        {
            cout << "-1";
            flag = 1;
            break;
        }
        if (str1[i] > str2[i])
        {
            cout << "1";
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {

        for (int i = 0; i < length1; i++)
        {

            if (str1[i] == str2[i])
            {
                cout << "0";
                break;
            }
        }
    }
}