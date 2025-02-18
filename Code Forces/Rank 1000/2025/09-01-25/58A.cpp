#include <iostream>
#include <string>
using namespace std;

int main()
{
    string given;
    cin >> given;

    string target = "hello";
    int targetIndex = 0;
    int targetLength = target.length();

    for (int i = 0; i < given.length(); i++)
    {

        if (given[i] == target[targetIndex])
        {
            targetIndex++;
        }

        if (targetIndex == targetLength)
        {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}
