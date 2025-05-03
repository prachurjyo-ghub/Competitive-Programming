#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;
/* ber korte hbe minimum radias of a light jeita hoile rasta pura alo hbe .
ekhon max j gap taache lights gular maje tar half korli radious ber hobe.
ekhon rekta bpr jodi  pos a light na thake tahole oi gap ta beshi hobe
ba last er pos a lights nai mane jodi light 3 , 5 , 7 a thake taile to gap 2 kore 
r half korle hoy 1 . to jehetu 0 pos a light nai tai 3 pos a 1 radious er light dile 
3-1 =2 porjonto cover hobe . 0 1 pos ondhokare thakbe . tai 0 - 3 ei pos consider kora lagbe 
eki vabe last er diker jonneo . tai 1s , last and middel er max gap er half . eder moddhe makimum tai 
ans .
*/

int main() {
    int n, l;
    cin >> n >> l;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
  // sort korar karon oi j max gap ber korbo . random hoile to 5- 7 = -ve value asbe 
    sort(a.begin(), a.end());

   
    int max_gap = 0;
    for (int i = 1; i < n; i++) {
        max_gap = max(max_gap, a[i] - a[i - 1]);
    }

   
    double d = max(max_gap / 2.0, max((double)a[0], (double)(l - a[n - 1])));

    
    cout << fixed << setprecision(10) << d << endl;

    return 0;
}
