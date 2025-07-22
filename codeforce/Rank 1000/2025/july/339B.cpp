#include <iostream>
#include <vector>
using namespace std;


int main() {
    long long house, tasks;
    cin >> house >> tasks;
    vector<long long > arr(tasks);
    for (long long i = 0; i < tasks; i++) {
        cin >> arr[i];
    }
    long long time = 0;
    long long currentHouse =1 ;
    for (long long i = 0; i < tasks; i++)
    {
        
        if (arr[i] >= currentHouse) {
            
            time = time +(arr[i] - currentHouse)  ; 
            currentHouse = arr[i];
        } else 
        {
            time = time + (house - currentHouse + arr[i]);
            currentHouse= arr[i];
        }

        
    
    }
    cout << time << endl;
    return 0;
}