#include <iostream>
#include<vector>
using namespace std;


int main() {
    int NofStudent , NofPuzz ;
    cin>>NofStudent>>NofPuzz;
    vector <int> puzz(NofPuzz);
    for (int i = 0; i < NofPuzz; i++)
    {
        cin>>puzz[i];
    }
    sort(puzz.begin(), puzz.end());
    int minDiff = INT_MAX;
    for (int i = 0; i <= NofPuzz - NofStudent; i++)
    {
        int diff = puzz[i + NofStudent - 1] - puzz[i];
        if (diff < minDiff)
        {
            minDiff = diff;
        }
    }
    cout<<minDiff<<endl;
    return 0;
}