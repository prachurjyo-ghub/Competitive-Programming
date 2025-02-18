#include<bits/stdc++.h>
using namespace std;
int main(){
    int a =0,b=0 ,count =0 ;
    int countMax=0;
    int n; cin>>n;
    for (size_t i = 0; i < n; i++)
    {
        cin>>a>>b;
        if (i==0)
        {
            count=b;
        }
        else
        {   
            if (count>countMax)
            {
              countMax=count;
            }
            
            count = count-a;
            count+=b;
        }
        
        
    }
    cout<<countMax;
    
return 0;
}