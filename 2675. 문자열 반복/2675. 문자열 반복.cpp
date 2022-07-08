//
//  2675. 문자열 반복.cpp
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
    
    int caseNum, repeat;
    string sentance;
    cin >> caseNum;
    for(int i = 0; i < caseNum; i++){
        cin >> repeat >> sentance;
        for(int j = 0; j < sentance.length(); j++){
            for(int k = 0; k < repeat; k++){
                cout << sentance[j];
            }
        }
        cout << "\n";
    }
    
    return 0;
}
