// converts lower to upper
#include <iostream>
#include<string>
#include <algorithm>

using namespace std;

int main(){
    // getting sentence as input
    string str;
    getline(cin,str);
    cout<<str<<endl;
    cout<<'a'-'A'<<endl;  // gives 32 a>A
    // lower to upper
    for(int i=0;i<str.size();i++){
        if(str[i]>='a' && str[i]<='z' && str[i] != ' ')
        str[i]-=32;  // +=32 for uppercase
    }
    cout<<str<<endl;

    // inbuilt function
    transform(str.begin(),str.end(),str.begin(),::tolower);
    cout<<str<<endl;
    transform(str.begin(),str.end(),str.begin(),::toupper);
    cout<<str<<endl;
    return 0;
}