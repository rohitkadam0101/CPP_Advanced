// Subarray => continous portion of part of array
// number of subarrays  = n*(n+1)/2


// Question :- find longest subarray of arithmetic array (difference between continous elements is same)

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int prevdiff = 2;
    int curr = a[1]-a[0];
    int ans = 2;
    int j =2;
    while(j<n){
        if(a[j+1]-a[j]==curr){
            curr +=1;
        }
        else{
            prevdiff = a[j+1]-a[j];
            curr = 2;
        }
        ans = max(curr,ans);
        j++;
    }
    cout<<ans<<endl;

}