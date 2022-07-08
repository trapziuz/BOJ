//
//  10870. 피보나치 수 5.cpp
//  단계별로 풀어보기 (9)
//
//  2022/07/08.
//
#include <iostream>
#include <string>
using namespace std;

int Fibonacci (int num){
    int num1 = 0, num2 = 1;
    if(num == 1)
        return num1;
    else if(num == 2)
        return num2;
    else if(num == 3)
        return (num1 + num2);
    else
        return (Fibonacci(num - 1) + Fibonacci(num - 2));
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int num;
    cin >> num;
    num = Fibonacci(num + 1);
    cout << num;
    
    return 0;
}
