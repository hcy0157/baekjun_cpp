#include <iostream>
#include <string>
#include <cstring>
using namespace std;
string s[5];

int main() {
 
    for (int i = 0; i < 5; i++) {
        getline(cin, s[i]);
    }
    for(int j=0; j<15; j++){
        for(int i=0; i<5; i++){
            if(s[i][j] != '\0' )
                cout << s[i][j];
            
        }
    }

   
    return 0;
}