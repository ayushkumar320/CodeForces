#include<iostream>
#include<cstring>
using namespace std;
string rev(string);

int main(void){
    string s1, s2;
    cin>>s1;
    cin>>s2;
    string reversed = rev(s2);
    if(s1 == reversed){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}

string rev(string k) {
    string reversed = "";
    int len = k.length();
    for(int i = len-1; i>=0; i--){
        reversed+=k[i];
    }
    return reversed;
}