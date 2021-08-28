#include <iostream>

using namespace std;

int main(){
    //Reverse a number 
    int n;
    cin>>n;
    int ans;
    while(n){
        int r = n%10;
        ans = ans*10 + r;
        n = n /10;
    }
    cout<<ans;
    return 0;
    // FOr prime use i=0;i<=sqrt(n);i++
    // armstrong  if n == sum of cubes of each digit
}
