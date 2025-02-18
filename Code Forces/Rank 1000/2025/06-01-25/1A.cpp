#include<bits/stdc++.h>
using namespace std;

int main(){
    long long m,n,a;
    cin>> m >> n >> a;

    double needed_in_length = (double)n/a;
    long long inLength =  ceil(needed_in_length);
   
    double neededInWeight = (double)m/a;
    long long inWeigth = ceil(neededInWeight);

    cout<< inLength*inWeigth;
    return 0;
}
