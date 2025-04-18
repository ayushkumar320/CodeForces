#include<iostream>
using namespace std;
int main(){
    int counter = 0;
    string s;
    cin>>s;
    int l = s.length();
    for(int i = 0; i < l; i++){
        for(int j = i+1; j<l; j++){
            if(s[i]!=s[j]){
                if(j==l){
                    counter++;
                }
            }
        }
    }
    cout<<counter;
    return 0;
}