#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.ignore();
    char a[n+1];
    cin.getline(a,n);
    cin.ignore();
    int i=0,curr= 0,mx = 0;
    int st = 0,stmx = 0;
    while(1){
        if(a[i] == ' ' || a[i]=='\0'){
            if(curr>mx){
                mx = curr;
                stmx = st;
            }
            curr = 0;
            st = i+1;
        }
        else{
            curr++;
        }
        if(a[i]=='\0'){
            break;
        }
        i++;
    }
    cout<<mx<<endl;
    


    return 0;
}