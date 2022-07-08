//
//  1152. 단어의 개수.cpp
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
    
    string sentance;
    getline(cin , sentance);
    int counter = 0;
        
    if(sentance[0] != ' ')
        counter++;
        
    for(int i = 1; i < sentance.size(); i++){
        if((sentance[i - 1] == ' ') && (sentance[i] != ' '))
            counter++;
    }
        
    cout << counter;

    return 0;
}
