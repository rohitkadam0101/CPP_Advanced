#include <iostream>
using namespace std;

class A{
    public:
    void fun1(){
        cout<<"Function A"<<endl;
    }
};
class B: public A{  // all the public part of A becomes public of B
                    // Also if we write private A all public part becomes private of A class B: private/protected A

    public:
    void func2(){
        cout<<"Function B"<<endl;
    }
 

};
class C: public B{
    public:
    void func3(){
        cout<<"Function C"<<endl;
    }
};

int main(){
    A a;
    a.fun1();
    B b;
    b.func2();
    C c;
    c.func2();
    c.fun1();
    c.func3();
    return 0;
}