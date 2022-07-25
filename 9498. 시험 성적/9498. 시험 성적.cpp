//
//  9498. 시험 성적.cpp
//
//  2022/07/26.
//

#include <iostream>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int score;
    
    cin >> score;
    
    if(score <= 100 && 90 <= score)
        cout << "A";
    else if(score <= 89 && 80 <= score)
        cout << "B";
    else if(score <= 79 && 70 <= score)
        cout << "C";
    else if(score <= 69 && 60 <= score)
        cout << "D";
    else
        cout << "F";
    
    return 0;
}
