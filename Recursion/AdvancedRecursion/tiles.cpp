#include <iostream>
using namespace std;

// small tile 2*1 to be fitted in how many ways in 2*n tiles

int tiles(int n){
    if(n==1 || n==2){
        return n; // can be fitted only in vertical way
    }
    if(n==0){
        return 0;
    }
    return tiles(n-1) + tiles(n-2);
}

int main(){
    int n;
    cin>>n;
    cout<<tiles(n);
}