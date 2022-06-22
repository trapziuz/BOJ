//
//  17478. 재귀함수가 뭔가요?.cpp
//  단계별로 풀어보기 (9)
//
//  2022/06/16.
//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
void recursionChat(int num, int callNum);
void printLine(int callNum);

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int num;
    cin >> num;
    recursionChat(num, 0);

    return 0;
}

void recursionChat(int num, int callNum){
    if(num > 0){
        if(callNum == 0){
            cout << "어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다.\n";
        }
        
        int tmp1 = 4;
        while(tmp1 > 0){
            printLine(callNum);
            if(tmp1 == 4){
                cout << "\"재귀함수가 뭔가요?\"\n";
                tmp1--;
            }
            else if(tmp1 == 3){
                cout << "\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.\n";
                tmp1--;
            }
            else if(tmp1 == 2){
                cout << "마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.\n";
                tmp1--;
            }
            else if(tmp1 == 1){
                cout << "그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"\n";
                tmp1--;
            }
        }
        recursionChat(num - 1, callNum + 1);
    }
    else if(num == 0){
        int tmp2 = 2;
        while(tmp2 > 0){
            printLine(callNum);
            if(tmp2 == 2){
                cout << "\"재귀함수가 뭔가요?\"\n";
                tmp2--;
            }
            else if(tmp2 == 1){
                cout << "\"재귀함수는 자기 자신을 호출하는 함수라네\"\n";
                tmp2--;
            }
        }
        recursionChat(num - 1, callNum);
    }
    else if(callNum >= 0){
        printLine(callNum); cout << "라고 답변하였지.\n";
        recursionChat(num - 1, callNum - 1);
    }
}

void printLine(int callNum){
    for(int i = 0; i < callNum; i++){
    cout << "____";
    }
}

