#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int num, sub;
    cin>>num>>sub;
    for(int i = 0; i<sub; i++){
        string s = to_string(num);
        int len = s.length();
        if(s[len-1] == '0'){
            
            num = num/10;
        }
        else {
            num--;
        }
    }
    cout<<num;
    return 0;
}