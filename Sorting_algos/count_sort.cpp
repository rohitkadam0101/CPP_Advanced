// Time Complexity O(n,max(a))
#include <iostream>
using namespace std;

void countSort(int a[],int n){
    int c[10] = {0};
    for(int i=0;i<n;i++){
        c[a[i]]++;
    }
    for(int i=1;i<=n;i++){
        c[i] = c[i] + c[i-1]; //adding counts of previous elements
    }
    int ans[n];
    for(int i=n-1;i>=0;i--){
        ans[--c[a[i]]] = a[i];
    }
    for(int i=0;i<n;i++){
        a[i] = ans[i];
    }

}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    countSort(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}