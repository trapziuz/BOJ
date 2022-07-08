//
//  2231. 분해합.cpp
//  단계별로 풀어보기 (10)
//
//  2022/07/05.
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
    
    int i = 1;
    for(; i < N; i++){
        int j = 1, n = i, m = 0;
        while(i / j >= 10){
            j *= 10;
        }
        for(int k = j; k != 1; k /= 10){
            int l = 0;
            for(; (l + 1) * k <= n; l++) {}
            m += l * (k + 1);
            n -= l * k;
        }
        m += n * 2;
        if(m == N){
            cout << i;
            break;
        }
    }
    if(i == N)
        cout << 0;
        
    return 0;
}
