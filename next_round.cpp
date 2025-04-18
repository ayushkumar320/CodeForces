#include<iostream>
using namespace std;

int main(){
    int n,k,ans = 0;
    do{
        cin>>n>>k;
    }while(n<0||n>50 || k>n || k<0);
    int a[n];
    for(int i = 0; i<n; i++){
        do{
            cin>>a[i];
        }while(a[i]<0 || a[i] > 100);
    }
    int benchmark = a[k-1];
    for(int i = 0; i<n; i++){
        if(a[i] >= benchmark && a[i] > 0){
            ans++;
        }
    }
    cout<<ans;
    return 0;
}