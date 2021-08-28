// Max circular subrray sum
// two condition => subarray with max sum is 1)non wrapping 2) wrapping

#include <iostream>

using namespace std;

int kadanes(int a[],int n){
    int curr = 0;
    int ans = a[0];
    for(int i=0;i<n;i++){
        curr+=a[i];
        ans = max(ans,curr);
        if(curr<0){
            curr = 0;
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int nonwrap  = kadanes(a,n); // returns non wrap sum(traditional kadanes)
    if(nonwrap<0){
        cout<<nonwrap;
        return 0;
    }
    int wrap;
    int total_sum = 0;
    for(int i=0;i<n;i++){
        total_sum+=a[i];
        a[i] = -a[i];
    }
    wrap = total_sum + kadanes(a,n);  //Here kadanes will return the subarray which is non contributing to wrapping sum
    cout<<max(wrap,nonwrap)<<endl;
    return 0;
}