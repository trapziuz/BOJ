//
//  2941. 크로아티아 알파벳.cpp
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
    
    string letter;
    int sum = 0;
    cin >> letter;
        
    for(int i = 0; i < letter.size(); i++){
        if((letter[i] == 'c') && (letter[i + 1] == '=')){
            sum++;
            i++;
        }
        else if((letter[i] == 'c') && (letter[i + 1] == '-')){
            sum++;
            i++;
        }
        else if((letter[i] == 'd') && (letter[i + 1] == 'z') && (letter[i + 2] == '=')){
            sum++;
            i++;
            i++;
        }
        else if((letter[i] == 'd') && (letter[i + 1] == '-')){
            sum++;
            i++;
        }
        else if((letter[i] == 'l') && (letter[i + 1] == 'j')){
            sum++;
            i++;
            }
        else if((letter[i] == 'n') && (letter[i + 1] == 'j')){
            sum++;
            i++;
        }
        else if((letter[i] == 's') && (letter[i + 1] == '=')){
            sum++;
            i++;
        }
        else if((letter[i] == 'z') && (letter[i + 1] == '=')){
            sum++;
            i++;
        }
        else
            sum++;
        }
        
        cout << sum;
        
        return 0;
}
