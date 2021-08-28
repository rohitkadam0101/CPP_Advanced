// Remove duplicates from given string(only for ascending chars )
#include <iostream>
using namespace std;

string removeDuplicates(string s){
    if(s.length()==0){
        return "";
    }
    char c = s[0];
    string ans = removeDuplicates(s.substr(1));
    if(c==ans[0]){
        return ans;
    }
    else{
        return c+ans;
    }
}

int main(){
    string s;
    cin>>s;
    cout<<removeDuplicates(s);
    return 0;
}