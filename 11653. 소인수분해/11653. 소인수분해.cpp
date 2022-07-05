//
//  11653. 소인수분해.cpp
//  단계별로 풀어보기 (8)
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

    double N;
    double i = 2;
    
    cin >> N;
    
    if(N != 1){
        while(N != 1){
            double M = N / i;
            while(M > 1)
                M--;
            
            if(M < 1){
                i++;
            }
            else{
                int ei = i;
                cout << ei << "\n";
                N /= i;
            }
        }
    }
    
    return 0;
}
