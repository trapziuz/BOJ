//
//  11720. 숫자의 합.cpp
//  단계별로 풀어보기 (6)
//
//  2022/07/08.
//

#include <iostream>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int num, sum = 0;
    cin >> num;
    char letter[101];
    cin >> letter;
        
    for(int i = 0; i < num; i++){
        sum += letter[i] - 48;
    }
    
    cout << sum;
}
