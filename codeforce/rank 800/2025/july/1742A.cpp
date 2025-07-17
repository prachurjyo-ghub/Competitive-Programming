#include <iostream>
#include <vector>
using namespace std;


int main() {
    
    long long n;
    cin>> n;
    while (n!=0)
    {
       vector<int> arr(3);
        for (int i = 0; i < 3; i++)
        {
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());

        if ((arr[0]+arr[1]) == arr[2])
        {
            cout<<"YES\n";
        } else if (arr[0] == 0 && arr[1]== 0 &&arr[2]==0)
        {
            cout<<"YES\n";
        } else 
        cout<<"NO\n";
        
        
        n--;
    }
   
    return 0;
}