#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n ; cin>>n;
    while (n!=0)
    {
        string given ;
        cin>>given;
        transform (given.begin(),given.end(),given.begin(), :: tolower);
        if (given == "yes" )
        {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
         
        
        
        n--;
    }
    
    return 0;
}