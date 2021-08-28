


// factorial

#include <iostream>
using namespace std;

// sum of n numbers 
int sum(int n){
    if(n==0){
        return 0;
    }
    return n+sum(n-1);
}

// nth fibonaci
int fib(int n){
    if(n==0|| n==1){
        return n;
    }
    return fib(n-1)+fib(n-2);
}

// power n raised to p

int pow(int a,int p){
    if(p==0){
        return 1;
    }
    return a* pow(a,p-1);
}

int fact(int n){
    if(n==0){
        return 1;
    }
    return n * fact(n-1);
}
int main(){
    cout<<sum(4)<<endl;
    cout<<fib(6)<<endl;
    cout<<pow(2,4)<<endl;
    cout<<fact(5)<<endl;
    return 0;
}