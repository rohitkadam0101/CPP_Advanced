#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string r = "rohit";
    int n = r.size();
    // reverse(r.begin(),r.end());
    for(int i=0;i<n/2;i++){
        swap(r[i],r[n-i-1]);
        
    }
    cout<<r<<endl;
    return 0;
}