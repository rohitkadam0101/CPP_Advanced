#include<iostream>
using namespace std;

// For wave sort A[0]>=A[1]<=A[2]>=A[3]<=A[4];
// maybe only for distinct elements

// 0   2   4
//  \ / \ /\
//   1  3   5

void wavesort(int a[], int n){
    for(int i=1;i<n;i+=2){
        if(a[i]>=a[i-1]){
            swap(a[i],a[i-1]);
        }
        if(a[i]>=a[i+1] && i<=n-2){
            swap(a[i],a[i+1]);
        }
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    wavesort(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}