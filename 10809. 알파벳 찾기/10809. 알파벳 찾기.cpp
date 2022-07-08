//
//  10809. 알파벳 찾기.cpp
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
    
    char letter[101];
    for(int i = 0; i < 101; i++){
        letter[i] = NULL;
    }
    int alphabet[26];
    for (int i = 0; i < 26; i++){
        alphabet[i] = -1;
    }
    
    cin >> letter;
        
    for(int i = 0; i < 101; i++){
        int l = letter[i] - 97;
        if(alphabet[l] == -1)
            alphabet[l] = i;
    }
    for (int i = 0; i < 26; i++){
        cout << alphabet[i] << " ";
    }
        
    return 0;
}
