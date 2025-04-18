#include<iostream>
using namespace std;

int main(){
    string s;
    int cap = 0, small = 0;
    cin>>s;
    int len = s.length();
    for(int i = 0; i<len; i++){
        if (s[i] > 64 && s[i] < 91){
            cap++;
        }
        else if (s[i] > 96 && s[i] < 123) {
            small++;
        }
    }
    if(small>=cap){
        for(int i = 0; i<len; i++){
            if(s[i] > 64 && s[i] < 91){
                s[i] += 32;
            }
            else{
                continue;
            }
        }
    }
    else{
        for(int i = 0; i<len; i++){
            if (s[i] > 96 && s[i] < 123){
                s[i] -= 32;
            }
            else{
                continue;
            }
        }
    }
    cout<<s;
    return 0;
}