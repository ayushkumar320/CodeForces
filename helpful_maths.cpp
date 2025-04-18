#include<iostream>
#include<cstring>
using namespace std;

int main(){
    string s;
    cin>>s;
    int l = s.length();
    for(int i=0; i<l; i+=2){
        for(int j = i+2; j<l; j+=2){
            if((int)s[i]>(int)s[j]){
                int temp = s[i];
                s[i] = s[j];
                s[j] = temp;
                s[i] = (char)s[i];
                s[j] = (char)s[j];
            }
        }
    }
    cout<<s;
    return 0;
}