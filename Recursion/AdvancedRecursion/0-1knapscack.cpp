// for each element we have two choices either take it or don' take it
// 2*N time complexity so better avoid it!!!

#include <iostream>
using namespace std;

int knapsack(int v[],int w[],int n,int W){
    if(n==0 || W==0){
        return 0;
    }
    if(w[n-1]>W){
        return knapsack(v,w,n-1,W); // don't include
    }
    // max(include,dont_include)
    return max((knapsack(v,w,n-1,W - w[n-1])+ v[n-1]),knapsack(v,w,n-1,W)); 
}

int main(){
    int v[] = { 60, 100, 120 };
    int w[] = {10,20,30};
    int W = 50;
    int n = 3;
    cout<<knapsack(v,w,n,W);
    return 0;
}