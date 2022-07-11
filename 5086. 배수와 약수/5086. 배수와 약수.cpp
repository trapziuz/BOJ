//
//  5086. 배수와 약수.cpp
//  단계별로 풀어보기 (14)
//
//  2022/07/11.
//

#include <iostream>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int x, y;
    
    cin >> x >> y;
    while(x != 0 && y != 0){
        if(x > y){
            for(int i = 1; i * y <= x; i++){
                if(i * y == x){
                    cout << "multiple\n";
                    break;
                }
                else if((i + 1) * y > x)
                    cout << "neither\n";
            }
        }
        else if(x < y){
            for(int i = 1; i * x <= y; i++){
                if(i * x == y){
                    cout << "factor\n";
                    break;
                }
                else if((i + 1) * x > y)
                    cout << "neither\n";
            }
        }
        
        cin >> x >> y;
    }
    
    return 0;
}
