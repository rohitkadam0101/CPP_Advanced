// Works only for lower case inputs
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    string s;
    cin>>s;
    int freq[26];
    for(int i=0;i<26;i++){
        freq[i] = 0;
    }
    for(int i=0;i<s.size();i++){
        freq[s[i]-'a']++;  // 'b' -'a' => 1 like this...
    }
    int ma = 0;
    char c = 'a';
    for(int i=0;i<s.size();i++){
        if(freq[s[i]-'a']!=0){
            cout<<s[i]<<" occurred "<<freq[s[i]-'a']<<" times"<<endl;
            if(freq[s[i]-'a']>ma){
                ma = freq[s[i]-'a'];
                c =  s[i];
            }
            freq[s[i]-'a'] = 0; // to avoid printing multiple times same character
        }
        
    }
    cout<<"Maximum is "<<c<<" occurred "<<ma<<" times"<<endl;
    return 0;
}
