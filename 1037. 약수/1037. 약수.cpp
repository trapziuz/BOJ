//
//  1037. 약수.cpp
//  단계별로 풀어보기 (14)
//
//  2022/07/14.
//

#include <iostream>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin >> N;
    
    int *arr;
    arr = new int[N];
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }
    
    for(int i = 1; i < N; i++){
        for(int j = 0; j < N - i; j++){
            if(arr[j] > arr[j + 1]){
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
    
    if(N == 1){
        cout << arr[0] * arr[0];
    }
    else if(N == 2){
        cout << arr[0] * arr[1];
    }
    else if(N / 2 == 1){
        cout << arr[N / 2] * arr[N / 2];
    }
    else{
        cout << arr[0] * arr[N - 1];
    }
    
    return 0;
}
