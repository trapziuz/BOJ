//
//  1001. A×B.cpp
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
    cout << A + B << "\n" << A - B << "\n" << A * B << "\n" << A / B << "\n" << A % B;

    return 0;
}
