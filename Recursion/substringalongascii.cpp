// Printing all possible substring with their ascii values

#include <iostream>
using namespace std;

void subs(string s, string ans){
    if(s.size()==0){
        cout<<ans<<endl;
        return;
    }
    char c = s[0];
    int asc = c;
    string rem = s.substr(1);
    subs(rem,ans);
    subs(rem,ans+c);
    subs(rem,ans+to_string(asc));
} 
int main(){
    string s;
    cin>>s;
    subs(s,"");
    return 0;
}