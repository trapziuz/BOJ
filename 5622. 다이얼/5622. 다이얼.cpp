//
//  5622. 다이얼.cpp
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
    
    string number;
    int time = 0;
    cin >> number;
    time += number.size() * 2;
    for(int i = 0; i < number.size(); i++){
        if(65 <= number[i] && number[i] < 68)
            time += 1;
        else if(68 <= number[i] && number[i] < 71)
            time += 2;
        else if(71 <= number[i] && number[i] < 74)
            time += 3;
        else if(74 <= number[i] && number[i] < 77)
            time += 4;
        else if(77 <= number[i] && number[i] < 80)
            time += 5;
        else if(80 <= number[i] && number[i] < 84)
            time += 6;
        else if(84 <= number[i] && number[i] < 87)
            time += 7;
        else if(87 <= number[i] && number[i] < 91)
            time += 8;
    }

    cout << time;
    
    return 0;
}
