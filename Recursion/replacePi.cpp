#include <iostream>
using namespace std;

void replacePi(string s){
    if(s.length()==0){
        return;
    }
    if(s[0]=='p' && s[1]=='i'){
        cout<<"3.14";
        replacePi(s.substr(2));
    }
    else{
        cout<<s[0];
        replacePi(s.substr(1));
    }
    // int i=0;
    // while(i<s.size())
    //     if(s[i]=='p'&&s[i+1]=='i'){
    //         cout<<"3.14";
    //         i+=2;
    //     }
    //     else{
    //         cout<<s[i];
    //         i++;
    //     }
    // }
}
int main(){
    string s;
    cin>>s;
    replacePi(s);
    return 0;
}
