//
//  2588. 곱셈.cpp
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
    
    int A, B;
    cin >> A >> B;

    cout << A * ((B % 10) / 1) << "\n" << A * ((B % 100) / 10) << "\n" << A * ((B % 1000) / 100) << "\n" << A * B;

    return 0;
}
