//given array contains elements that occurs 2 times and only one element that occurs one return that element

#include <iostream>
using namespace std;

int unique(int a[],int n){
    int xorsum = 0;
    for(int i=0;i<n;i++){
        xorsum = xorsum ^ a[i]; //xor of 1011 1011 => 0000 so same numbers xor will be zero
    }
    return xorsum;
}
int main(){
    int n;
    cin>> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<unique(a,n);
}