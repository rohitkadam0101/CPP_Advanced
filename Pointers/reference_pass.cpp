// *ptr = &a
// **q = *ptr //pointer to pointer
// int a = {1,2,3} cout << *a first element   printing *(a+i)
#include <iostream>

using namespace std;

void incriment(int *a){
    (*a)++; //Arithmetic pointer incriment
}

void swap(int *p,int *q){
    int temp  = *p;
    *p  = *q;
    *q = temp;
}
int main(){
    int a = 20;
    cout<<a<<endl;
    incriment(&a);
    cout<<a<<endl;
    int p = 20;
    int q = 30;
    swap(&p,&q);
    cout<<p<<" "<<q<<endl;
    // pointer to pointer
    int d = 45;
    int *r = &d;
    int **s = &r;
    cout<<**s<<endl;
    return 0;
}