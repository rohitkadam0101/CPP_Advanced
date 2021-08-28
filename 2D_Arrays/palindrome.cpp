#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    char arr[n+1];
    cin>>arr;
    int i = 0,flag = 1;
    while(arr[i]!='\0'){
        if(arr[i]!=arr[n-i-1]){
            flag = 0;
            break;
        }
        i++;
    }
    if(flag){
        cout<<"It is palindrome";
    }
    else{
        cout<<"It is not palindrome";
    }
    return 0;
}