// finding the first and last occurence of element in an array by recurrsion

#include <iostream>
using namespace std;

int firstocc(int a[],int n,int i,int key){
    if(i==n){
        return -1;
    }
    if(a[i]==key){
        return i;
    }
    return firstocc(a,n,i+1,key);
}

int lastocc(int a[],int n,int i,int key){
    if(i==n){
        return -1;
    }
    int restarr = lastocc(a,n,i+1,key);
    if(restarr!=-1){
        return restarr;
    }
    if(a[i]==key){
        return i;
    }
    return -1;
}
int main(){
    int a[] = {1,2,3,4,2,2,3};
    cout<<firstocc(a,7,0,4)<<endl;
    cout<<lastocc(a,7,0,3)<<endl;
    return 0;
}