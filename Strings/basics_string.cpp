#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string a = "hello";
    cout<<a<<endl;
    cout<<a[2]<<endl;
    //size or length
    cout<<a.size()<<endl;
    cout<<a.length()<<endl;

    //append or concatenation

    string b = "world";
    string c = a+b;  // or a.append(b)
    cout<<c<<endl;

    //compare

    cout<<a.compare(b)<<endl;

    // find element

    cout<<a.find("ell")<<endl;
    cout<<a.find("h")<<endl;

    cout<<a.empty()<<endl;

    string d = "temporary";
    d.erase(2,5); //start no of chars

    // insert

    d.insert(0,"itsa");
    cout<<d<<endl;

    // substring
    string r = "rohit";
    cout<<r.substr(2,3)<<endl;

    // int to string and viceversa

    string n = "76453";
    int n1 = stoi(n);
    cout<<n1<<endl;
    int n2 =  6789;
    string n3 = to_string(n2);
    cout<<n3<<endl;




    return 0;
}