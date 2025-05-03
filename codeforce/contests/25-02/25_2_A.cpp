#include <bits/stdc++.h>
using namespace std;
    /*
    array n size er deya sob gula elements 0 deya ,
    ekhon p er -ve to +ve range er number use kore oi
    gula number add korle k er soman hobe , minumum koyta
    number hoile k reache kora jabe oita outbup hbe 
    r kora na gele -1 dibe 
    
    */
int solve(int n, int k, int p)
{   
    /*jodi p r total elements or array er gun korle k er 
    kom hoy taile to possible na reache kora baki ta simple 
    p er max man diye ber korbo koyta p lagbe . celing 
    catch korbe taile 1 gulao cole asbe */
    int minSum = -n * p, maxSum = n * p;

    if (k < minSum || k > maxSum)
        return -1;

    return (abs(k) + p - 1) / p;}

    int main()
    {
        int t;
        cin >> t;
        while (t--)
        {
            int n, k, p;
            cin >> n >> k >> p;
            cout << solve(n, k, p) << endl;
        }
        return 0;
    }
