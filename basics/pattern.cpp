#include <iostream>

using namespace std;

int main(){

    // pattern 1:

    // int row,col;
    // cin>>row>>col;
    // for(int i=1;i<=row;i++){
    //     for(int j=1;j<=col;j++){
    //         if( i==1 || i == row || j==1 || j ==col){
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }

    // pattern 2:

    // int row,col;
    // cin>>row>>col;
    // int c = 1;
    // for(int i=1;i<=row;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<c++;
    //     }
    //     cout<<endl;
    // }

    //Pattern 3: (Butterfly)
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){  //Upper part
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        int space = 2*n - 2*i;
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i=n;i>=1;i--){  //Lower part
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        int space = 2*n - 2*i;
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}