

# include<iostream>
# include <string>

using namespace std;

int main(){
    // Decimal to Binary
    int n;
    cout<<"Enter decimal number: ";
    cin>>n;
    int res[32]; // As integer takes 32 bits in c++
    int r,i=0;
    while(n>0){
        r = n % 2;
        res[i] = r;
        n = n / 2;
        i++;
    }
    for(int j=i-1;j>=0;j--){
        cout<<res[j];
    }
    cout<<endl;
   

    //Binary to decimal

    int bin;
    cout<<"Enter binary value:";
    cin>>bin;
    int deci;
    int base  = 1; // Intially 2^0
    while(bin){
        int rem = bin % 10;
        deci += rem * base;
        base =  base * 2;
        bin= bin / 10;
    }
    cout << deci;
     return 0;
}