#include<iostream>
using namespace std;
int main(){

    string name;
    cin>>name;
    
    int length = name.length();
    int count=0;

    for (int i = 0; i < length; i++)
    {
         for (int j = 0; j < i ; j++) {
           if (name[i]==name[j])
           {
            count--;
            break;
           }
        
        }
        count++;
       
    }
      if (count%2==1){
      cout << "IGNORE HIM!" << endl; 
    } else {
        cout << "CHAT WITH HER!" << endl; 
    }
  
 
}