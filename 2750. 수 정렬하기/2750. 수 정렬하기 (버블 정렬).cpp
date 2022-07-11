//
//  2750. 수 정렬하기 (버블 정렬).cpp
//  단계별로 풀어보기 (11)
//
//  2022/07/11.
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
    arr = new int [N];
    
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
    
    for(int i = 0; i < N; i++){
        cout << arr[i] << "\n";
    }
    
    return 0;
}
