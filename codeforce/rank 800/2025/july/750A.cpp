#include <iostream>

using namespace std;


int main() {
     int nofProb , time;
     cin>>nofProb>>time;
     int remTime= 240 - time;
     int solved =0;
    for (int i = 1; i <= nofProb; i++)
    {
        
         if (remTime >= i*5)
        {
            solved =solved +1;
            remTime= remTime-(i*5);
        } else break;
    }
    cout<<solved<<endl;
   




    return 0;
}