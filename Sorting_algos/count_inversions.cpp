// inversion pair if a[i]>a[j] and i<j
// naive approah
// c=0
// for(int i=0;i<n;i++){
//     for(int j=i+1;j<n;j++){
//         if(a[i]>a[j]){
//             c++
//         }
//     }
// }

#include <iostream>
using namespace std;

long long merge(int a[], int l , int mid , int r){
    long long inv =0;
    int n1 = mid-l+1;
    int n2 = r-mid;
    int b[n1];
    int c[n2];
    for(int i=0;i<n1;i++){
        b[i] = a[l+i]; 
    }
    for(int i=0;i<n2 ;i++){
        c[i] = a[mid+i+1];
    }
    int i=0;
    int j = 0;
    int k =l;
    while(i<n1 && j<n2){
        if(b[i]<=c[j]){
            a[k] = b[i];
            k++;
            i++;
        }
        else{
            // b[i] is greater than c[j] hence all element after b[i] will be greater than c[j]
            // as both arrays that we are merging will already be sorted
            a[k] = c[j];
            inv+= n1-i;
            k++;
            j++;
        }
    }
    while(i<n1){
        a[k] = b[i];
        i++;
        k++;
    }
    while(j<n2){
        a[k] = c[j];
        k++;
        j++;
    }
    return inv;
    
    
}

long long mergeSort(int a[],int l,int r){
    long long inv = 0;
    if(l<r){
        int mid = (l+r)/2;
        inv += mergeSort(a,l,mid);
        inv +=mergeSort(a,mid+1,r);
        inv += merge(a,l,mid,r);
    }
    return inv;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"inversions:"<<mergeSort(a,0,n)<<endl;
    cout<<"After sorting"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
   
    return 0;
}