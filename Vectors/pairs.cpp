// pair<int,char> a;
// a.first = 5
// a.second  = 'a'

//Reduce array write the smallest element of array to its index 
#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

bool myComp(pair<int,int>p1,pair<int,int>p2){
    return p1.first < p2.first;
}

int main(){
    int a[] = {10,16,7,14,5,3,12,9};
    vector<pair<int,int>> v; // creating dictionary to store element and its index
    int n = sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++){
        v.push_back(make_pair(a[i],i));
    }
    sort(v.begin(),v.end(),myComp); // sorting the array along with its index
    for(int i=0;i<v.size();i++){
        a[v[i].second] = i; //place 0,1,2 in index of sorted array
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;

}