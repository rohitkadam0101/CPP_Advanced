# include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        int flag = 0;
        int k;
        for(k=2;k<i;k++){
            if(i%k==0){
                flag = 1;
                break;
            }
        }
        if(!flag){
            cout<<k<<endl;
        }
    }
}