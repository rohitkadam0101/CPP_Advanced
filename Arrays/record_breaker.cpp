// Record breaker if it is greater than all prev elements and its next element

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n+1];
    a[n] = -1; // To compare with last element 
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int mx = INT_MIN;
    int ans = 0;
    for(int i=0;i<n;i++){
        if(a[i]>mx && a[i]>a[i+1]){
            ans +=1;
        }
        mx = max(a[i],mx);
    }
    cout<<"Number of record breaker days are "<<ans;
    return 0;
}