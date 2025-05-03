#include <iostream>
using namespace std;
int main()
{

   int n, count = 0;
   cin >> n;
   string meg1 = "", meg2 = "";

   for (int i = 0; i < n; i++)
   {
      cin >> meg2;
      if (meg1 != meg2)
      {
         count++;
         meg1 = meg2;
      }
   }
   cout << count;
}
