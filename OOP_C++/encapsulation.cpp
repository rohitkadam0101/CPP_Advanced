#include <iostream>
using namespace std;

class A{
    public: // Access modifiers
    void func1(){
        cout<<"Function 1"<<endl;
    };
    private:
    void func2{
        cout<<"Function 2"<<endl;
    };
    protected: //only in inherited
    void func3{
        cout<<"Function 3"<<endl;
    };
};

int main(){
    A obj1;
    obj1.func1();
    obj1.func2(); // inaccessible outside class 
    obj1.func3(); // inaccessible outside class
    return 0;
}