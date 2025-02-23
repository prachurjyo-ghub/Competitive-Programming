#include<bits/stdc++.h>
using namespace std;
  
       /* easy peasy r kisu test draw korle nijhei figure out kora
       jay j ascending order ei asbe column gula*/
  
int main() {
  
      int t;
      cin >> t;
    vector<int> ar (t);
    for (size_t i = 0; i < t; i++)
    {
        cin>>ar[i];
    }

    sort(ar.begin(),ar.end());

    for (size_t i = 0; i < t; i++)
    {
       cout<<ar[i]<<" ";
    }    
    
}