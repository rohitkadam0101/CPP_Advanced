// DNF sort(0,1,2)  sort
// only works with 3 elements particularly 0 1 2
#include <iostream>
using namespace std;


void dnf(int a[],int n){
    int low =0; // checks for 0
    int mid = 0; // checks for 1
    int high = n-1; // checks for 2
    while(mid<=high){
        if(a[mid]==0){
            swap(a[low],a[mid]);
            low++;
            mid++;
        }
        else if(a[mid]==1){
            mid++;
        }
        else{
            swap(a[mid],a[high]);
            high--;
        }
    }
}



int main(){
    int a[] = {0,2,2,1,1,1,0,2};
    dnf(a,8);
    for(int i=0;i<8;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}