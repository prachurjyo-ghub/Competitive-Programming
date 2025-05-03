#include<bits/stdc++.h>
using namespace std;
int main(){

    int t; 
    cin >> t;

    while (t--) {
     int a,b,count=0;
     cin>>a>>b;
     if (a%b==0)
     {
       cout<<count<<endl;
     }
     else {
     while (a%b!=0)
     {
        a=a+1;
        count++;
    }
   cout<<count<<endl;
    }}
    
   

return 0;
}