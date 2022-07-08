//
//  1008. A/B.cpp
//  단계별로 풀어보기 (1)
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
    
    double A, B;
    cin >> A >> B;
    
    cout.precision(15);
    cout << A / B;
    
    return 0;
}
