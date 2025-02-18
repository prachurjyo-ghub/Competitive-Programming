#include<bits/stdc++.h>
using namespace std;
int main(){
    string given;
    cin>>given;
    auto it = find(given.begin(),given.end(),'h');
    cout<<distance(given.begin(),it);
return 0;
}