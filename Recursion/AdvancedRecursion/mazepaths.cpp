#include <iostream>
using namespace std;

int mazePaths(int n, int i, int j){
    if(i==n-1 && j==n-1){
        return 1; //reached to destination
    }
    if(i>n-1|| j>n-1){
        return 0;
    }
    return mazePaths(n,i+1,j) + mazePaths(n,i,j+1); //at each point we have two chances either go down or left so add both
}

int main(){
    cout<<mazePaths(4,0,0);
    return 0;
}