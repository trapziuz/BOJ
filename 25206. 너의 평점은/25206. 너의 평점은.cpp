//
//  25206. 너의 평점은.cpp
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
    
    double entireGrade = 0, subjectSum = 0;
    
    for(int i = 0; i < 20; i++){
        double tmpGrade, tmpSum;
        string subjectName, subjectGrade;
        
        cin >> subjectName >> tmpSum >> subjectGrade;
        subjectSum += tmpSum;
        
        if(subjectGrade == "A+")
            tmpGrade = 4.5;
        else if(subjectGrade == "A0")
            tmpGrade = 4.0;
        else if(subjectGrade == "B+")
            tmpGrade = 3.5;
        else if(subjectGrade == "B0")
            tmpGrade = 3.0;
        else if(subjectGrade == "C+")
            tmpGrade = 2.5;
        else if(subjectGrade == "C0")
            tmpGrade = 2.0;
        else if(subjectGrade == "D+")
            tmpGrade = 1.5;
        else if(subjectGrade == "D0")
            tmpGrade = 1.0;
        else if(subjectGrade == "F")
            tmpGrade = 0.0;
        else if(subjectGrade == "P"){
            subjectSum -= tmpSum;
            tmpGrade = 0.0;
        }
        entireGrade += tmpGrade * tmpSum;
    }
    
    entireGrade /= subjectSum;
    
    cout << entireGrade;
    
    return 0;
}
