// for each function stack frame is created based on when they are called
// eg => main() first then add() then print() and local variables are destroyed when function returns something

// Pascal Triangle code iCj

# include <iostream>
using namespace std;

int fact(int n){
    int ans=1;
    for(int i=2;i<=n;i++){
        ans = ans * i;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<fact(i)/(fact(j)*fact(i-j))<<""; //icj
        }
        cout<<endl;
    }

    return 0;
}