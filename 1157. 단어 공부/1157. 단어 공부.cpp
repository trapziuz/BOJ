//
//  1157. 단어 공부.cpp
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
    cin >> sentance;
    int alphabet[27], letter, most = 27;
    bool twice = false;
    for(int i = 0; i < 27; i++){
        alphabet[i] = -1;
    }
    
    for(int i = 0; i < sentance.length(); i++){
        letter = sentance[i];
        if(letter < 97)
            letter -= 65;
        else
            letter -= 97;
            
        if(alphabet[letter] == -1)
            alphabet[letter]++;
        alphabet[letter]++;
        }
        
        for(int i = 0; i < 26; i++){
            if(alphabet[i] == -1)
                continue;
            else if(alphabet[most] < alphabet[i]){
                most = i;
                twice = false;
            }
            else if(alphabet[most] == alphabet[i]){
                twice = true;
            }
        }
        
        if(twice == true)
            cout << "?";
        else {
            char mostLetter = most + 65;
            cout << mostLetter;
        }
    
    return 0;
}
