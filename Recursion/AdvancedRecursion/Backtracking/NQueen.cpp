// N queen problem
// place queen but can attack diagonal vertical horizontal

#include <iostream>
using namespace std;

bool isSafe(int **a,int x ,int y,int n){
    //check for row of that col(upwards)
    for(int row = 0;row<n;row++){
        if(a[row][y] == 1){
            return false;
        }
    }
    //check for left diagonal
    int row = x;
    int col  = y;
    while(row>=0 && col>=0){
        if(a[row][col]==1){
            return false;
        }
        row--;
        col--;
    }
    //check for right diagonal
    row = x;
    col  = y;
    while(row>=0 && col<n){
        if(a[row][col]==1){
            return false;
        }
        row--;
        col++;
    }
    return true;
}

bool nQueen(int **a,int x,int n){
    if(x>=n){
        return true; // all queens are placed
    }
    // check for each column of single row to find correct position of each queen
    for(int col=0;col<n;col++){
        if(isSafe(a,x,col,n)){
            a[x][col] = 1; // queen can be placed
            if(nQueen(a,x+1,n)){ // check for next row
                return true;

            } 
            a[x][col] = 0; // backtracking if we fail to place either of the queen 
        }

    }
    return false;
}

int main(){
    int n;
    cin>>n;
    int **a = new int *[n];
    for(int i=0;i<n;i++){
        a[i] = new  int[n];
        for(int j=0;j<n;j++){
            a[i][j] = 0; // intially all zeroes
        }
    }
    if(nQueen(a,0,n)){ // placing column wise
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}