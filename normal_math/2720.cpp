#include <iostream>
#include <vector>

using namespace std;
int qua = 25;
int dim = 10;
int nic = 5;
int pen = 1;

void calculate(int input){
    int arr[4] = {0};
    cout << "input : "  << input << endl;
    
    if(input >= qua){
        arr[0] += input/qua;
        input %=qua;
    }
    if(input >= dim){
        arr[1] += input/dim;
        input %=dim;
    }
    if(input >= nic){
        arr[2] += input/nic;
        input %=nic;
    }
    if(input >= pen){
        arr[3] += input/pen;
        input %= pen;
    }
    
    for(int i=0; i<4; i++){
            cout << arr[i]<<" ";
    }
    cout << endl;
}

int main(){
    int n;
    vector<int> input;
    int num;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &num);
        input.push_back(num);
    }
    
    for(int i=0; i<input.size(); i++){
        calculate(input[i]);
    }


    return 0;
}