//
//  1065. 한수.cpp
//  단계별로 풀어보기 (5)
//
//  2022/06/25.
//

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;
int arithmetic(int N);

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    
    N = arithmetic(N);
    
    cout << N;
    
    return 0;
}

int arithmetic(int N){
    int arN = 0;
    
    for(int i = 0; i < N; i++){
        if(i < 99)
            arN++;
        else if(i < 999){
            int a = ((i + 1) % 10) - ((i + 1) / 10) % 10;
            int b = ((i + 1) / 10) % 10 - (((i + 1) / 10) / 10) % 10;
            if(a == b) arN++;
        }
    }
    
    return arN;
}
