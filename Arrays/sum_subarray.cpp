#include <iostream>
using namespace std;
// Brute Force Method
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int s;
    cin>>s;
    for(int i=0;i<n;i++){
        int s1 = 0;
        int j;
        for(j=i;j<n;j++){
            s1+=a[j];
            if(s1==s){
                cout<<i<<j<<endl;
            }
        }
        
    }
}

// Optimal Method

// int main(){
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int s;
//     cin>>s;
//     int curr = 0,i,start = 0;
//     for(int i=0;i<n;i++){
//         curr = curr + a[i];
//         if(curr== s){
//             cout<<start<<i<<endl;
//         }
//         while(curr>s){
//             curr = curr - a[start];
//             start++;
//         }
//     }
// }