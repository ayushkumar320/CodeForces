#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int n;
    do{
        cin>>n;
    }while(n<0 || n>151);
    int x = 0;
    string op;
    for (int i = 0; i < n; i++){
        cin>>op;
        if(op == "++X"){
            x = ++x;
        }
        else if(op == "X++"){
            x = ++x;
        }
        else if(op == "--X"){
            x = --x;
        }
        else if(op == "X--"){
            x = --x;
        }
    }  
    cout<<x;
    return 0;
}