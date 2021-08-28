// Kadanes algorithm
// Used to find max subarray sum O(n) works only for positive input
// The simple idea of Kadane’s algorithm is to look for all positive contiguous segments of the array

#include <iostream>
#include <climits>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int max_sum = a[0]; //for array with one element
    int curr_sum = 0;
    for(int i=0;i<n;i++){
        curr_sum+=a[i];
        max_sum = max(max_sum,curr_sum);
        if(curr_sum<0){
            curr_sum =0;
        }
    }
    cout<<max_sum;
    
    return 0;

}