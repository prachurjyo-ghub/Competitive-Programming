#include <iostream>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    map<string, int> name_count; 
    
    while (n--) {
        string name;
        cin >> name;

        if (name_count[name] == 0) {
           
            cout << "OK" << endl;
        } else {
           
            cout << name << name_count[name] << endl;
        }
        
        
        name_count[name]++;
    }
    
    return 0;
}