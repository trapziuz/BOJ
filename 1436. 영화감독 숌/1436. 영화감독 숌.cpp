//
//  1436. 영화감독 숌.cpp
//  단계별로 풀어보기 (10)
//
//  2022/07/09.
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
    
    for(int i = 665; N >= 0; i++){
        int num = i + 1;
        if(N == 0){
            cout << i;
            break;
        }
        
        int digit = 1;
        while(num >= 10){
            num /= 10;
            digit++;
        }
        
        int counter = 0;
        while(digit > 0){
            num = i + 1;
            int tmp1 = 1, tmp2 = 1;
            for(int j = 0; j < digit; j++){
                tmp1 *= 10;
            }
            for(int j = 1; j < digit; j++){
                tmp2 *= 10;
            }
            num %= tmp1;
            num /= tmp2;
            
            if(num == 6)
                counter++;
            else if(counter != 0)
                counter = 0;
            
            if(counter == 3)
                break;
            
            digit--;
        }
        if(counter == 3)
            N--;
    }
    
    return 0;
}
