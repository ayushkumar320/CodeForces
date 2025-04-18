#include<iostream>
using namespace std;
int main(void){
    int n, countA = 0, countD = 0;
    cin>>n;
    string s;
    cin>>s;
    int len = s.length();
    for(int i = 0; i<len; i++){
        if(s[i] == 'A'){
            countA++;
        }
        else{
            countD++;
        }
    }
    if(countA>countD){
        cout<<"Anton";
    }
    else if(countD>countA){
        cout<<"Danik";
    }
    else{
        cout<<"Friendship";
    }
    return 0;
}