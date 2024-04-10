#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
//using namespace std;

int main() {
    std::string N;
    int B;
    std :: cin >> N >> B;
    int sum =0;
    
    int count = 0;
    for(int i=N.length()-1; i>=0 ; i--){
        int num= 0;
        
        if(N[i] >= '0' &&  N[i] <='9'){
            num = N[i] - '0';
            sum += num*pow(B,count);
            count++;
        }
        else{
            num = N[i] - 55;
            sum += num*pow(B,count);
            count++;
        }
    }
    
    
    std::cout << sum << std::endl;
    
    
    return 0;
}