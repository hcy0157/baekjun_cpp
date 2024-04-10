#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    int N;
    int B;
    cin >> N >> B;
    string result;
    int quo = N;

    while(quo>B){
        int rem =0;
        
        rem = quo%B;
        quo = N/B;

        if(rem>9){
            string word;
            word = rem + 55;
            result = result.append(word);
        }
        else{
            string word;
            word = rem;
            result = result.append(word);
        }
    }

    cout << result;

    return 0;
}