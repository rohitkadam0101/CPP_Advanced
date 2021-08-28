// Printing subarray then max subarray sum
# include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                cout<<a[k];
            }
            cout<<endl;
        }
    }
    int mx = INT_MIN;
    // Max subarray sum
    for(int i=0;i<n;i++){
        
        for(int j=i;j<n;j++){
            int s = 0;
            for(int k=i;k<=j;k++){
                s+=a[k];
            }
            mx = max(mx,s);
            
        }
    }
    cout<<mx;
    return 0;
}