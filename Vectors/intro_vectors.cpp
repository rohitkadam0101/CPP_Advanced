#include<iostream>
using namespace std;
#include<vector>
#include <algorithm>

int main(){
    vector<int> a;
    a.push_back(4);
    a.push_back(5);
    a.push_back(6);
    //iterating
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    vector<int>::iterator it;
    for(it = a.begin();it<a.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    for(auto i:a){
        cout<<i<<" ";
    }
    cout<<endl;
    a.pop_back();
    sort(a.begin(),a.end());

    vector<int> v2(3,0); //initialize with 0
    for(auto i:v2){
        cout<<i<<" ";
    }
    cout<<endl;

    //2d array with user input
    int n,m;
    cout<<"Enter row size: ";
    cin>> n;
    cout<<"Enter col size: ";
    cin>>m;
    vector<vector<int>>v1(n,vector<int>(m,0)); // n*m zero vector
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<v1[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}