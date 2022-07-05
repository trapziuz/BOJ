//
//  2798. 블랙잭.cpp
//  단계별로 풀어보기 (10)
//
//  2022/07/05.
//

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, M, tmp = -1;
    cin >> N >> M;
    
    int* arr;
    arr = new int [N];
    
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }
    
    for(int i = 0; i < N - 2; i++){
        for(int j = i + 1; j < N - 1; j++){
            for(int k = j + 1; k < N; k++){
                if(tmp == -1){
                    tmp = arr[i] + arr[j] + arr[k];
                }
                if(M == tmp)
                    break;
                else{
                    int tmp1 = M - tmp;
                    if(tmp1 < 0)
                        tmp1 = -tmp1;
                    
                    int tmp2 = M - (arr[i] + arr[j] + arr[k]);
                    if(tmp2 < 0)
                        tmp2 = -tmp2;
                    
                    if(tmp2 < tmp1 && arr[i] + arr[j] + arr[k] <= M){
                        tmp = arr[i] + arr[j] + arr[k];
                    }
                }
            }
        }
    }
    
    cout << tmp;
        
    return 0;
}
