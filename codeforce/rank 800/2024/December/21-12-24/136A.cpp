#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n; int ar[n+1]; 
   for (int i = 1; i <=n; i++)
   {
   cin>>ar[i];
   }
   int res[n+1];
   
    for (int i = 1; i <= n; i++) {
        res[ar[i]] = i; 
    }

    
    
    
   
   for (int i =1; i <=n; i++)
    {
       cout<<res[i]<<" ";
    }
    


return 0;
}