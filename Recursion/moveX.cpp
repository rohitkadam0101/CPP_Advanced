// Moves all x's from string at the end of string

#include <iostream>
using namespace std;

string moveX(string s){
    if(s.length()==0){
        return "";
    }
    char c = s[0];
    string sub = moveX(s.substr(1));
    if(c=='x'){
        return  sub+c;
    }
    return c + sub;
}
int main(){
    string s;
    cin>>s;
    cout<<moveX(s);
    return 0;
}