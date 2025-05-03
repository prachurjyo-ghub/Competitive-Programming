#include<iostream>
using namespace std;
int main(){
 
 int x[4],count=0;
for (int i = 0; i < 4; i++)
{
   cin>>x[i];
}



 for (int i = 0; i < 4; i++)
 {
    if ((i==0 || x[i] != x[i-1]) && (i==3 || x[i]!=x[i+1]))
    {
       count++;
    }
    


    
 }
 
   
   


 
 cout<<count;
 
 
 
 
 
}