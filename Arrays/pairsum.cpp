// Pair sum find pair in array whose sum equals  k
// Brute force O(n^2) i=0 to n-1 and j=i+1 to n
// Two pointer (ARRAY MUST BE SORTED) only prints one pair for more than one pair use hashmap

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void twopair(int a[],int n,int k){
    int low = 0;
    int high = n-1;
    while(low<high){
        if(a[low]+a[high]==k){
            cout<<low<<" "<<high;
            break;
        }
        else if(a[low]+a[high]<k){
            low++;
        }
        else{
            high --;
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
    int k;
    cin>>k;
    sort(a,a+n);
    twopair(a,n,k);
    return 0;
}