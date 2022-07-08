//
//  2741. N 찍기.cpp
//  단계별로 풀어보기 (3)
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
    
    int n, ans = 0;
        
    cin >> n;
        
    while(n--) {
        ans++;
        cout << ans << "\n";
    }
        
    return 0;
}
