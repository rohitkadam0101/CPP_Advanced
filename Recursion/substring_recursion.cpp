// Finding subsequence(substring) of string by recursion
// Start with empty string
// Either append nothing or append char + rest of string
// This codes starts from reverse of tree we draw

#include <iostream>
using namespace std;

void subsequence(string s,string ans){
    if(s.size()==0){
        cout<<ans<<endl;
        return;
    }
    char c = s[0];
    string ros = s.substr(1);
    subsequence(ros,ans);
    subsequence(ros,ans+c);
}

int main(){
    string s;
    cin>>s;
    subsequence(s,"");
    return 0;
}