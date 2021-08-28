#include <iostream>
using namespace std;


bool isSafe(int **a, int x , int y,int n){
    if(x<n && y<n && a[x][y] == 1){
        return true;
    }
    else{
        return false;
    }
}


bool ratInMaze(int **a,int x,int y,int n,int **solArr){
    if(x == n-1 && y==n-1){
        solArr[x][y] = 1;
        return true;
    }
    if(isSafe(a,x,y,n)){
        solArr[x][y] = 1;
        if(ratInMaze(a,x+1,y,n,solArr)){ //if path exists at right side
            return true;
        }
        if(ratInMaze(a,x,y+1,n,solArr)){ //if path exists at down side
            return true;
        }
        solArr[x][y] = 0; // Backtrack
        return false;
    }
    return false; // if no path
}

int main(){
    int  n;
    cin>>n;
    int **a = new int *[n];  //dynamic memory for 2d array
    for(int i=0;i<n;i++){
        a[i] = new int[n];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int **solArr = new int *[n];
    for(int i=0;i<n;i++){
        solArr[i] = new int [n];
        for(int j=0;j<n;j++){
            solArr[i][j] = 0; //initialize to zero
        }
    }
    if(ratInMaze(a,0,0,n,solArr)){
        cout<<"Solution Array is..."<<endl;
        for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<solArr[i][j]<<" ";
        }
        cout<<endl;
    }
    }

    return 0;
}