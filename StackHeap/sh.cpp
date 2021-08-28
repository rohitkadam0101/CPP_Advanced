// Stack => functions are pushed as they are called and returned in opposite of pushing
// fixed size can lead to overflow , memory is declared during compile time and cannot be modified during runtime
// heap dynamic memory 
// memory must be deallocated or leads to memory leak
// dangling pointer => pointer from stack pointing to nothing in heap

#include <iostream>
using namespace std;

int main(){
    int a = 10; // in stack
    int *p = new int(); // pointer in stack pointing to heap
    *p = 20;
    cout<<*p<<endl;
    delete(p); //dangling pointer 
    p = new int[5];
    for(int i=0;i<5;i++){
        cin>>p[i];
    }
    for(int i=0;i<5;i++){
        cout<<p[i];
    }
    delete [] p;
    p = NULL;
    return 0;


}