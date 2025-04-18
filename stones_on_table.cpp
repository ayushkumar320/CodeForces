#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int numOfStones;
    cin>>numOfStones;
    int counter = 0;
    string color;
    cin>>color;
    for(int i = 0; i<numOfStones; i++){
        for(int j = i+1; j<i+2; j++){
            if(color[i] == color[j]){
                counter++;
            }
            else{
                continue;
            }
        }
    }
    cout<<counter;
    return 0;
}