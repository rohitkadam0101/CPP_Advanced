#include <iostream>
using namespace std;

int main(){
    int freq[4] = {0};
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        freq[s[i]-'a']++;
    }
    for(int i=0;i<s.size();i++){
        cout<<s[i]<<" occurred"<<freq[s[i]-'a']<<" times"<<endl;
        freq[s[i]-'a'] = 0;
    }
    return 0;
}