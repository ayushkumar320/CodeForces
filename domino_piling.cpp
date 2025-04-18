#include<iostream>
using namespace std;

int main(){
    int m, n;
    do{
        cin>>m>>n;
    }while(n<0 || n>16 || m < 0 || m>n);
    int rem;
    int total_sq = m*n;
    rem = total_sq/2;
    cout<<rem;
    return 0;
}