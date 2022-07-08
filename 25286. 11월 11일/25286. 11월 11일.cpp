//
//  25286. 11월 11일.cpp
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
    
    int T, Y, M;
    cin >> T;
    
    int arr[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    
    for(int i = 0; i < T; i++){
        
        cin >> Y >> M;
        
        if(M == 1)
            cout << Y - 1 << " 12 ";
        else
            cout << Y << " " << M - 1 << " ";
        
        if(M == 3){
            if(Y % 4 == 0){
                if(Y % 100 == 0){
                    if(Y % 400 == 0)
                        cout << arr[M - 2] + 1 << "\n";
                    else
                        cout << arr[M - 2] << "\n";
                }
                else
                    cout << arr[M - 2] + 1 << "\n";
            }
            else
                cout << arr[M - 2] << "\n";
        }
        else if(M == 1)
            cout << arr[11] << "\n";
        else
            cout << arr[M - 2] << "\n";
    }
    
    return 0;
}
