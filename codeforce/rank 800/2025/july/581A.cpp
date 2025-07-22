#include <iostream>

using namespace std;
/* 581A 
   eikhene person er kache red and blue socks ache 
   ekhon o red and blue socks er pair banaye porbe . 
   pair banay koto din porte parebe oita print korte hobe.
   er por obosisto gula kotot din porte parbe oita ber korte hobe 
*/

int main()
{
    int a, b;
    cin >> a >> b;
    if (a == 0 && b == 0)
    {
        cout << "0 0" << endl;
    }
    else if (a > b)
    {
        cout << b << " " << (a - b) / 2 << endl;
    }
    else
    {
        cout << a << " " << (b - a) / 2 << endl;
    }
    return 0;
}