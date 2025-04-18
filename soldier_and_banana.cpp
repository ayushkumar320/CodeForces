#include<iostream>
using namespace std;

int main(){
    int k,n,w;
    cin>>k>>n>>w;
    // k - cost of first banana
    // n - initial number of dollars
    // w - number of banans he want
    int total_cost = 0;
    for (int i = 1; i <= w; i++){
        total_cost = total_cost +  k*i;
    }
    int amount_to_borrow = total_cost - n;
    if (amount_to_borrow > 0){
        cout<<amount_to_borrow;
    }
    else{
        cout<<0;
    }
    return 0;
}