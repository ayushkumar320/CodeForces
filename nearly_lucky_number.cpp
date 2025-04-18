#include<iostream>
#include<cstring>
using namespace std;

int main(void){
    long long num; 
    int count = 0;
    cin>>num;
    string s = to_string(num);
    int len = s.length();
    for(int i = 0; i < len; i++){
        if(s[i] == '4' || s[i] == '7'){
            count++;
        }
        else{
            continue;
        }
    }
    if(count == 4 || count == 7){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}