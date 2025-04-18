#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int count = 1;
    int remainder = x-5;
    while(remainder>0){     
        if(remainder >= 4){
            remainder -= 4;
            count++;
        }
        else if(remainder >= 3){
            remainder -= 3;
            count++;
        }
        else if(remainder >=2){
            remainder -= 2;
            count++;
        }
        else if(remainder >=1){
            remainder -= 1;
            count++;
        }
    } 
    cout<<count;
    return 0;
}