//
//  2884. 알람 시계.cpp
//  단계별로 풀어보기 (2)
//
//  2022/07/05.
//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int H, M;
    
    cin >> H >> M;
    
    if(M >= 45){
        cout << H << " " << M - 45;
    }
    else{
        if(H == 0)
            cout << 23 << " " << 15 + M;
        else
            cout << H - 1 << " " << 15 + M;
    }
        
    return 0;
}
