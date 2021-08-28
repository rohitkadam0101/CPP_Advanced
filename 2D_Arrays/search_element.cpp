// Finding an element in matrix which is sorted by both rows and columns

#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    int k;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    cin>>k;
    bool found = false;
    int row = 0,col = m-1; //corner right of matrix
    while(row<n && col>=0){
        if(a[row][col]==k){
            found = true;
        }
        if(a[row][col]>k){
            col--;  // if element is less then it is present at left so col--
        }
        else{
            row++; // if element is greater then it is present at down so row++
        }
    }
    if(found){
        cout<<"element found";
    }
    else{
        cout<<"Element not found";
    }
    return 0;
}