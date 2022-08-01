//
//  1002. 터렛.cpp
//
//  2022/08/01.
//

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++){
        int x1, y1, r1, x2, y2, r2, x, y;
        float r;
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        
        if(x1 >= 0 && x2 >= 0){
            if(x1 > x2)
                x = x1 - x2;
            else
                x = x2 - x1;
            }
        else if(x1 >= 0 && x2 <= 0){
            x = x1 - x2;
        }
        else if(x1 <= 0 && x2 >= 0){
            x = x2 - x1;
        }
        else{
            if(x1 > x2)
                x = x1 - x2;
            else
                x = x2 - x1;
        }
        
        if(y1 >= 0 && y2 >= 0){
            if(y1 > y2)
                y = y1 - y2;
            else
                y = y2 - y1;
        }
        else if(y1 >= 0 && y2 <= 0){
            y = y1 - y2;
        }
        else if(y1 <= 0 && y2 >= 0){
            y = y2 - y1;
        }
        else{
            if(y1 > y2)
                y = y1 - y2;
            else
                y = y2 - y1;
        }
        
        r = x * x + y * y;
        r = sqrt(r);
        
        if(x1 == x2 && y1 == y2 && r1 == 0 && r2 == 0){
            cout << 1; // (1) 두 터렛의 위치와 목표물의 위치가 동일한 경우
        }
        else if(x1 == x2 && y1 == y2 && r1 == r2){
            cout << -1; // (2) 두 원이 같은 위치에 있는 같은 크기의 원일 경우
        }
        else if(r == r1 + r2 || r + r1 == r2 || r + r2 == r1){
            cout << 1; // (3) 두 원이 내접하는 경우 / 두 원이 외접하는 경우
        }
        else if(r > r1 + r2 || r + r1 < r2 || r + r2 < r1){
            cout << 0; // (4) 두 원이 외부에서 두 번 만나는 경우 / 두 원이 내부에서 두 번 만나는 경우
        }
        else{
            cout << 2; // (5) 그 외 모든 경우
        }
        
        cout << "\n";
        
    }
    
    return 0;
}
