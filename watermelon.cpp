#include<iostream>
using namespace std;

int main(){
    int w;
    cin>>w;
    if(w>0 && w<101){
        if(w%2 == 0 && w!= 2){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
        return 0;
    }
    else{
        return 1;
    }
}