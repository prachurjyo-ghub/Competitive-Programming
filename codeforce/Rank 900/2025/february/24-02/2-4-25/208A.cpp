#include <iostream>
#include <sstream>

using namespace std;

int main() {
    string s;
    cin >> s;

    /*ekta loop colbe WEB er frist jeikhene ache oi position find korbe 
    colbe jotokkhon porjont no position mane last porjont 
    pos update hbe amne j frist WEB er pos paile oita theke abr start hbe porer WUB na paoa porjont  
    */

    for (size_t pos = s.find("WUB"); pos != string::npos; pos = s.find("WUB", pos)) {
        // replase diye pos ee position theke 3 ta character k replace kore dibe space diye
        s.replace(pos, 3, " ");
    }

    stringstream ss(s);
    string word;
    //frist word print hoiche ki na check korar jonne karon frist a to space deya jabe na 
    bool firstWord = true;

    
    while (ss >> word) {
        // frist word print hoile tarpor space dibe 
        if (!firstWord) cout << " ";
        cout << word;
        firstWord = false;
    }

    cout << endl;
    return 0;
}
