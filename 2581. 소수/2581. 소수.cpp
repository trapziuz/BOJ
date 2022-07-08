//
//  2581. 소수.cpp
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

    int arr[10000];
    
    for(int i = 0; i < 10000; i++){
        arr[i] = 0;
    }
    
    for(int i = 1; i < 10000; i++){
        if(arr[i + 1] == 0){
            for(int j = 1; j < 10000; j++){
                if((i + 1) * (j + 1) < 10000)
                    arr[(i + 1) * (j + 1)] = 1;
                else
                    break;
            }
        }
    }
    
    arr[1] = 1;
    
    int L = 0, O = 0;
    while(M <= N){
        if(arr[N] == 0){
            L = N;
            O += L;
        }
        N--;
    }
    if(L != 0)
        cout << O << "\n" << L;
    else
        cout << "-1";
    
    return 0;
}
