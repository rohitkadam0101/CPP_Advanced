// Tower of hanoi
// A=>source C=>destination and B=>helper

#include <iostream>
using namespace std;

void towerOfHanoi(int n,char src, char des,char helper){
    if(n==0){
        return;
    }
    // move n-1 from src to helper
    towerOfHanoi(n-1,src,helper,des);
    cout<<"Move from "<<src<<" to "<<des<<endl;
    // move n-1 from helper to destination
    towerOfHanoi(n-1,helper,des,src);
}
int main(){
    towerOfHanoi(3,'A','C','B');
    return 0;
}