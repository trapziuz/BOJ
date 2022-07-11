//
//  25305. 커트라인.cpp
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
    
    int N, k, *arr;
    cin >> N >> k;
    arr = new int [k];
    
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }
    
    for(int i = 1; i < N; i++){
        for(int j = 0; j < N - i; j++){
            if(arr[j] < arr[j + 1]){
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
    
    cout << arr[k - 1];
    
    return 0;
}
