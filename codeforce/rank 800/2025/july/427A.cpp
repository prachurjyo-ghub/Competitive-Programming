#include <iostream>

using namespace std;


int main() {
    int n;
    cin>>n;
    int crime =0 , pol =0;
    for (int i = 0; i < n; i++)
    {
        
        string event;
        cin>>event;
        if (event == "-1" )
        {   
            if (pol >0 )
            {
                pol=pol-1;
            } else
            crime= crime +1; 
           
        } else
        {
            int x = stoi(event);
            pol = pol + x;
        }
        
        
    }
     cout<<crime<<endl;
    
    return 0;
}