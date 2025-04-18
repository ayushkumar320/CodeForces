#include<iostream>
using namespace std;
int main(){
    int n, h;
    cin>>n>>h;
    int heights[n];
    for(int i = 0; i<n; i++){
        cin>>heights[i];
    }
    int counter = 0;
    for(int i = 0; i<n; i++){
        if(heights[i] <= h){
            counter++;
        }
        else{
            counter+=2;
        }
    }
    cout<<counter;
    return 0;
}