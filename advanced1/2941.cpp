#include <iostream>
#include <cstring>
#include <string>
using namespace std;

const char *search[]={
    "nj",
    "dz",
    "lj"
};


int main() {
    char s[101];
    cin >> s;
    int count =0;
    int size = strlen(s);
    for(int i=0; i<size; i++){
        if(islower(s[i])){
            if(islower(s[i+1]) && i+1<size){
                int cnt=0;
                
                for(int j=0; j<3; j++){
                    if(strncmp(s+i,search[j], 2)==0 ){
                        cnt++;
                        
                    }
                }
                if(cnt == 1){
                    count++;
                    i++;
                }
                else
                    count++;
            }
            else
                count++;
            
        }
        
    }
    cout << count;

}