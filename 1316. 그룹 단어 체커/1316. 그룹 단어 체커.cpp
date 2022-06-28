//
//  1316. 그룹 단어 체커.cpp
//  단계별로 풀어보기 (6)
//
//  2022/06/28.
//

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin >> N;
    int letter_Num = N;
    
    for(int i = 0; i < letter_Num; i++){
        int alphabet_box[26];
        for(int i = 0; i < 26; i++){
            alphabet_box[i] = 0;
        }
        
        string letter;
        cin >> letter;
        
        for(int j = 0; j < letter.size(); j++){
            int alphabetN = letter[j] - 97;
            if(alphabet_box[alphabetN] < 0){
                N -= 1;
                break;
            }
            else if(alphabet_box[alphabetN] >= 0)
                alphabet_box[alphabetN]++;
            if(j > 0){
                int alphabetBackN = letter[j - 1] - 97;
                if(alphabetBackN != alphabetN)
                    alphabet_box[alphabetBackN] = -100;
            }
        }
    }
    
    cout << N;
    
    return 0;
}
