//
//  10872. 팩토리얼.cpp
//  단계별로 풀어보기 (9)
//
//  2022/07/07.
//

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;
int factorial(int num);

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin >> N;
    
    N = factorial(N);
    
    cout << N;
    
    return 0;
}

int factorial(int num){
    if(num > 2)
        num *= factorial(num - 1);
    else if(num == 0)
        num = 1;
    return num;
}
