#include <iostream>

using namespace std;


int main() {
    int arr [3];
    for (int i = 0; i < 3; i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr+3);
    int total = (arr[2]-arr[0]);
    
    
    cout<<total<<endl;
    return 0;
}