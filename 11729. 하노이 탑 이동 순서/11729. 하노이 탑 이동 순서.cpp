//
//  11729. 하노이 탑 이동 순서.cpp
//  단계별로 풀어보기 (9)
//
//  2022/07/08.
//

#include <iostream>
#include <string>
using namespace std;
void Hanoi(int num, int x, int y, int z);

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin >> N;
    
    int K = 0;
    for(int i = 1; i < N; i++){
        K += 1;
        K *= 2;
    }
    if(K != 1)
        K++;
    cout << K << "\n";
    
    Hanoi(N, 1, 2, 3);
    
    return 0;
}

void Hanoi(int num, int x, int y, int z){
    if(num == 1){
        cout << x << " " << z << "\n";
    }
    else if(num == 2){
        Hanoi(1, x, z, y);
        Hanoi(1, x, y, z);
        Hanoi(1, y, x, z);
    }
    else{
        Hanoi(num - 1, x, z, y);
        Hanoi(1, x, y, z);
        Hanoi(num - 1, y, x, z);
    }
}
