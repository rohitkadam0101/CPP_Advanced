#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void seive(int n){
    int f[100] = {0};
    for(int i=2;i<sqrt(n);i++){
        if(f[i]==0){
            for(int j=i*i;j<=n;j+=i){
                f[j] = 1;
            }
        }
    }
    for(int i=2;i<n;i++){
        if(f[i]==0){
            cout<<i<<" ";
        }
    }
}
int main(){
    int n;
    cin>>n;
    seive(n);
    return 0;
}