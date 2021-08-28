//Returns prime factors of number
#include <iostream>
using namespace std;

void smallest_prime(int n){
    int spf[100]  ={0};
    for(int i=2;i<=n;i++){
        spf[i] = i;
    }
    for(int i=2;i<=n;i++){
        if(spf[i]==i){
            for(int j=i*i;j<=n;j+=i){
                if(spf[j]==j){ //this is imp condition as it keeps track of smallest factor in case of 45 3 & 5 are factors but only 3 will be marked 
                    spf[j] = i;
                }
            }
        }
    }
    while(n!=1){
        cout<<spf[n]<<" ";
        n = n/spf[n];
    }
}

int main(){
    int n;
    cin>>n;
    smallest_prime(n);
    return 0;

}