//
//  4948. 베르트랑 공준.cpp
//  단계별로 풀어보기 (8)
//
//  2022/06/28.
//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
void bertrand(int n);

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
    while(1){
        bertrand(n);
        cin >> n;
        if(n == 0)
            break;
        else
            cout << "\n";
    }
    
    return 0;
}

void bertrand(int n){
    int num = 0;
    int* arr = (int*)malloc(sizeof(int) * 2 * n + 1);
    
    for(int i = 0; i < 2 * n + 1; i++){
        arr[i] = 0;
    }
    
    for(int i = 0; i < 2 * n + 1; i++){
        if(arr[i] == 0 || arr[i] == 1){
            for(int j = 1; (i + 1) * (j + 1) <= 2 * n + 1; j++){
                arr[(i + 1) * (j + 1) - 1]++;
            }
        }
    }
    for(int i = n; i <= 2 * n - 1; i++){
        if(arr[i] == 1)
            num++;
    }
    
    cout << num;
}
