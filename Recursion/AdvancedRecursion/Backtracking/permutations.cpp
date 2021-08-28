// permutations of all distinct elements in an array

#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int ans[n];
    int i=0;
    do{
        ans[i] = a;
        i++;
    }while(next_permutation(a[0],a[n]))
}