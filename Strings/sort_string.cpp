// printing max possible number from numeric string

#include <iostream>
#include<string>
#include <algorithm>

using namespace std;

int main(){
    string st = "342659";
    sort(st.begin(),st.end(),greater <int> ());
    cout<<st<<endl;
    char a  = 'A';
    cout<<int(a)<<endl;
    cout<<'b'-'a'<<endl;




    return 0;
}