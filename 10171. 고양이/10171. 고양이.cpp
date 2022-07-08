//
//  10171. 고양이.cpp
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
    
    char A = 92, B = 47, C = 41, D = 40, E = 39, F = 95, G = 124;

    cout << A << "    " << B << A << " \n " << C << "  " << D << " " << E << C << "\n" << D << "  " << B << "  " << C << "\n " << A << D << F << F << C << G;

    return 0;
}
