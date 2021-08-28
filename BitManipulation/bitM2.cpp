#include <iostream>
using namespace std;

int power2(int n){
    return n && !(n&(n-1));
}

int countones(int n){
    int c = 0;
    while(n){
        n = n &(n-1); //keep doing this until we find power of 2
        c++;
    }
    return c;
}
int power4(int n){
    return n>0 && !(n&(n-1)) && (n-1)%3==0;
}

void subsets(int A[],int n){
    for(int i=0;i<(1<<n);i++){
        for(int j=0;j<n;j++){ // check if jth bit is set bit of i 
            if(i&(1<<j)){
                cout<<A[j]<<" ";
            }
        }
        cout<<endl;
    }
}
int main(){
    cout<<power2(9)<<endl;
    cout<<countones(7)<<endl;
    cout<<power4(16)<<endl;
    int A[] = {1,2};
    subsets(A,2);

    return 0;
}