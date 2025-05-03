#include<bits/stdc++.h>
using namespace std;
string forFullstop(string in){
    string res;
    for (size_t i = 0; i < in.length(); i++)
    {
        char a = in[i];
        res = res+'.';
        res = res+ a;

    }
     return res;

 }

int main(){
    string given;
    cin >>given;
     char x;
    transform(given.begin(), given.end(), given.begin(), ::tolower);
     string noVowel;
    
    for (size_t i = 0; i < given.length(); i++)
    {
      
       if(given[i]=='a'|| given[i]=='e' || given[i]=='i'||given[i]=='o'||given[i]=='u'||given[i]=='y')
      continue;
     noVowel.push_back(given[i]);}

    cout<<forFullstop(noVowel);

return 0;
}