//
//  9020. 골드바흐의 추측.cpp
//  단계별로 풀어보기 (8)
//
//  2022/06/28.
//

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int T;
    cin >> T;
    
    while(1){
        T--;
        int n;
        cin >> n;
        
        int* arr = (int*)malloc(sizeof(int) * n);
        for(int i = 0; i < n; i++){
            arr[i] = 0;
        }
        
        for(int i = 0; i < n; i++){
            if(arr[i] == 0 || arr[i] == 1){
                for(int j = 1; (i + 1) * (j + 1) <= n; j++){
                    arr[(i + 1) * (j + 1) - 1]++;
                }
            }
        }
        
        int a, b;
        int c = -1;
        
        int i = 0;
        while(c != 0 && i < n){
            for(; i < n; i++){
                if(arr[i] == 1){
                    int j = n - i - 2;
                    if(j > 0 && arr[j] == 1 && j >= i){
                        if(c == -1){
                            a = i;
                            b = j;
                            c = b - a;
                        }
                        else{
                            if(c > j - i){
                                a = i;
                                b = j;
                                c = b - a;
                            }
                        }
                    }
                }
            }
        }
        
        a += 1, b += 1;
        
        cout << a << " " << b;
        
        if(T != 0){
            cout << "\n";
        }
        else{
            break;
        }
    }
        
    return 0;
}
