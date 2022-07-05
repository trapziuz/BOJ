//
//  2839. 설탕 배달.cpp
//  단계별로 풀어보기 (7)
//
//  2022/06/25.
//

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    int x = 3, y = 5, z = -1;
    
    int N;
    cin >> N;
    
    for(int i = 0; i * y <= N; i++){
        for(int j = 0; i * y + j * x <= N; j++) {
            if(i * y + j * x == N){
                if(z == -1) z = i + j;
                else if(z > i + j) z = i + j;
            }
        }
    }
    
    cout << z;
    
    return 0;
}
