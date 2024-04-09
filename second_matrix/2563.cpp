#include <iostream>
using namespace std;

int main() {
    int white[100][100] = {0};
    int input;

    cin >> input;

    for(int i=0; i<input; i++){
        int x, y;
        cin >> x >> y;
        for(int j=x; j<x+10; j++){
            for(int k=y; k<y+10; k++){
                white[j][k] = 1;
            }
        }
    }

    int count =0;
    for(int i=0; i<100; i++){
        for(int j=0; j<100; j++){
            if(white[i][j] == 1){
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}