#include <iostream>

using namespace std;

int main(){
    int arr[9][9];
    int temp = 0x80000000;
    int x,y;
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            cin >> arr[i][j];
            if(temp < arr[i][j]){
                temp = arr[i][j];
                x = i+1;
                y = j+1;
            }
        }
    }

    cout << temp << endl;
    cout << x <<" "<< y;

    

}