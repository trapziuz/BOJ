//
//  1978. 소수 찾기.cpp
//  단계별로 풀어보기 (8)
//
//  2022/06/25.
//

#include <iostream>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int arr[1000];
    
    for(int i = 0; i < 1000; i++){
        arr[i] = 0;
    }
    
    for(int i = 1; i < 1000; i++){
        if(arr[i + 1] == 0){
            for(int j = 1; j < 1000; j++){
                if((i + 1) * (j + 1) < 1000)
                    arr[(i + 1) * (j + 1)] = 1;
                else
                    break;
            }
        }
    }
    
    arr[1] = 1;
    
    int N, A, X = 0;
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> A;
        if(arr[A] == 0)
            X++;
    }
    
    cout << X;
    
    return 0;
}
