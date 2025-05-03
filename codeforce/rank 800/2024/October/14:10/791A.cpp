#include<iostream>
using namespace std;
int main(){
 int a ,b;
 cin>>a>>b;
 int count=0,flag=0;

    if (a==b)
    {   flag =1;
       cout<<"1";
    }
    
    if (flag==0)
    {
       while (a<=b)
    {
       a=a*3;
       b=b*2;
       count ++;
    }
        cout<<count;
    }
    
 
 
}