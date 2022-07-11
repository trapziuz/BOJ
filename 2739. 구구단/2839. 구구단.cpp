//
//  2739. 구구단.cpp
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
    
    int N;
    
    cin >> N;
    
    for(int i = 0; i < 9; i++){
        cout << N << " * " << i + 1 << " = " << N * (i + 1) << "\n";
    }
    
    return 0;
}
