//
//  4673. 셀프 넘버.cpp
//  단계별로 풀어보기 (5)
//
//  2022/06/25.
//

#include <iostream>
#include <string>
using namespace std;
int slfunc(int num);

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int slfArr[20000];
    int slf;
    
    for(int i = 0; i < 10000; i++){
        slf = slfunc(i + 1);
        slfArr[slf - 1]++;
    }
    
    for(int i = 0; i < 10000; i++){
        if(slfArr[i] == 0)
            cout << (i + 1) << "\n";
    }
    
    return 0;
}

int slfunc(int num){
    int slf = num;
    
    if(num < 10)
        slf = num + num;
    else if(num < 100){
        slf = num + (num % 10) + (num / 10);
    }
    else if(num < 1000){
        slf = num + (num % 10) + ((num / 10) % 10) + ((num / 10) / 10);
    }
    else if(num < 10000){
        slf = num + (num % 10) + ((num / 10) % 10) + (((num / 10) / 10) % 10) + (((num / 10) / 10) / 10);
    }
    
    return slf;
}
