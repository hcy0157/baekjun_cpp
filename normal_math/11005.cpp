#include <iostream>
#include <string>

using namespace std;

int main(){
    int N;
    int B;
    cin >> N >> B;
    string result;
    int quo = N;


    
    while(quo>1){
        int rem =0;
        
        rem = quo%B;
        quo = quo/B;
        
        if(rem>9){
            char word;
            word = rem + 55;
            result += word;
        }
        else{
            string word;
            word = to_string(rem);
            result += word;
        }
    }

    cout << result;

    return 0;
}