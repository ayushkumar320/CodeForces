#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int numOfWords;
    cin>>numOfWords;
    string s[numOfWords];
    for(int counter = 0; counter < numOfWords; counter++){
        cin>>s[counter];
    }
    for(int i = 0; i<numOfWords; i++){
        int l = s[i].length();
        if(l>10){
            cout<<s[i][0]<<l-2<<s[i][l-1]<<endl;
        }
        else{
            cout<<s[i]<<endl;
        }
    }
    return 0;
}