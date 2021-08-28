// merge sort (divide and conquer)
// O(nlogn)

#include <iostream>
using namespace std;

void merge(int A[],int l, int mid,int r){
    int n1 = mid-l+1;
    int n2 = r-mid;
    int b[n1]; //temp arrays
    int c[n2];
    for(int i=0;i<n1;i++){
        b[i] = A[l+i];
    }   
    for(int i=0;i<n2;i++){
        c[i] = A[mid+i+1];
    }
    int i = 0;
    int j=0;
    int k=l;
    while(i<n1 && j<n2){  //merge two sorted arrays
        if(b[i]<=c[j]){
            A[k] = b[i];
            k++;
            i++;
        }
        else{
            A[k] = c[j];
            k++;
            j++;
        }
    }
    while(i<n1){
        A[k] = b[i];
        i++;
        k++;
    }
    while(j<n2){
        A[k] = c[j];
        k++;
        j++;
    }
}

void mergesort(int A[],int l,int r){
    if(l>=r){
        return;
    }
    int mid = l+(r-l)/2;
    mergesort(A,l,mid);
    mergesort(A,mid+1,r);
    merge(A,l,mid,r);
    

}
int main(){
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    mergesort(A,0,n-1);
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }


    return 0;
}