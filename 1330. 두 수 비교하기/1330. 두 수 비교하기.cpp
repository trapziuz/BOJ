//
//  1330. 두 수 비교하기.cpp
//  단계별로 풀어보기 (2)
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
    
    int A, B;
    cin >> A >> B;

    if (A > B){
        cout << ">";
    }
    else if (A < B){
        cout << "<";
    }
    else{
        cout << "==";
    }
    
    return 0;
}
