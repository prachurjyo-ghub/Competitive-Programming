#include <iostream>

using namespace std;


int main() {
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>> np;
    int drink = k*l;
    int tdrink = drink/ nl;
    int tslice = c*d;
    int tsalt =  p/np;
    int toast = min(tdrink,min(tslice,tsalt));
    cout<<toast/n;

    return 0;
}