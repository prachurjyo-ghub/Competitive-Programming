#include<bits/stdc++.h>
using namespace std;
int main(){
    int num ,height;
    cin >>num >>height;
    int count=0;
    int ar [num];
    for (size_t i = 0; i < num; i++)
    {
        int nh;
      cin>> nh;
      if (nh>height)
      {
        count+=2;
      } else {
        count++;
      }
    }

     cout<<count;





return 0;
}