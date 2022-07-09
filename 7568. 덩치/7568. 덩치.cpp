//
//  7568. 덩치.cpp
//  단계별로 풀어보기 (10)
//
//  2022/07/09.
//
#include <iostream>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin >> N;
    
    int* height;
    height = new int[N];
    int* weight;
    weight = new int[N];
    int* rank;
    rank = new int[N];
    
    
    for(int i = 0; i < N; i++){
        cin >> weight[i] >> height[i];
        rank[i] = 0;
    }
    
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(height[i] < height[j] && weight[i] < weight[j])
                rank[i]++;
        }
    }
    
    for(int i = 0; i < N; i++){
        cout << rank[i] + 1 << " ";
    }
    
    return 0;
}
