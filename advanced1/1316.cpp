#include <iostream>
#include <cstring>
#include <string>
#include <cstdlib>
using namespace std;

int checkout(char** p,int num){
    int d_count =0;
    int i=0;
    char temp;
    temp = i;
  
    for(int j=1; j<strlen(p[num]); j++){
        //cout << p[num][temp];
        if(p[num][temp] == p[num][j]){ //연속해서 같은 문자일 경우 다음으로 넘김
            temp = j;
        }
        else{ // 같지 않을 경우 이외를 비교해봄
            for(int k=j+1; k<strlen(p[num]); k++){
                if(p[num][temp] == p[num][k]){
                    d_count = 1;
                    break;
                }
            }
            temp = j; //겹치는 문자가 없을 때
        }
    }    

    if(d_count == 1){
        return 0;
    }
    else{
        return 1;
    }
    
}

int main(){
    int input;
    cin >> input;
    char **p = new char *[input];
    
    for(int i=0; i<input; i++){
        char temp[100];
        cin >> temp;
        p[i] = (char*)malloc(sizeof(char)*101);
        strcpy(p[i],temp);
    }
    int count =0;
    for(int i=0; i<input; i++){
        count += checkout(p,i);
    }

    cout << count;
    for(int i=0; i<input; i++){
     
        free(p[i]);
    }
    return 0;
}