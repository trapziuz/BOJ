//
//  1929. 소수 구하기.cpp
//  단계별로 풀어보기 (8)
//
//  2022/06/26.
//

#include <iostream>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int M, N;
    cin >> M >> N;
    
    int* arr = (int*)malloc(sizeof(int) * N);
    
    for(int i = 0; i <= N; i++){
        arr[i] = 0;
    }
    
    for(int i = 1; i <= N; i++){
        if(arr[i + 1] == 0){
            for(int j = 1; j <= N; j++){
                if((i + 1) * (j + 1) <= N)
                    arr[(i + 1) * (j + 1)] = 1;
                else
                    break;
            }
        }
    }
    
    arr[1] = 1;

    
    for(int i = M; i <= N; i++){
        if(arr[i] == 0)
            cout << i << "\n";
    }
    
    return 0;
}
