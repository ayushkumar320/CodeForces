#include<iostream>
using namespace std;

int main(){
    int numOfQues, countOfQues = 0;
    cin>>numOfQues;
    int p1, p2, p3;
    for(int i = 0; i < numOfQues; i++){
        cin>>p1>>p2>>p3;
        if(p1+p2+p3 > 1){
            countOfQues++;
        }
    }
    cout<<countOfQues;
    return 0;
}