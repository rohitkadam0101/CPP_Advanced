#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second > b.second);
}
int main(){
    // int a[] = {11,23,1,4};
    // int n = 4;
    // sort(a,a+n);
    // for(int i=0;i<4;i++){
    //     cout<<a[i]<<" ";
    // } // Normal sort in ascending order
    // cout<<"\n";
    // sort(a,a+n,greater<int>());
    // for(int i=0;i<4;i++){
    //     cout<<a[i]<<" ";
    // } // Normal sort in descending order
    // cout<<"\n";
    vector<pair<int,int>>p;
    for(int i=0;i<=3;i++){
        int start,end;
        cin>>start>>end;
        p.push_back({start,end});
    }
    // sort(p.begin(),p.end()); // sorts based on first value of pair
    // for(auto &i:p){
    //     cout<<i.first<<i.second<<" ";
    // }
    cout<<"\n";
    sort(p.begin(),p.end(),sortbysec); // sorting by second value of pair
    for(auto &i:p){
        cout<<i.first<<" "<<i.second<<" ";
        cout<<"\n";
    }
    cout<<"\n";
    return 0;

}