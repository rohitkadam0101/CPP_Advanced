// Count number of paths in linear array
// given the dice (1,6)

#include <iostream>
using namespace std;

int countpaths(int s, int e){
    if(s==e){
        return 1;
    }
    if(s>e){
        return 0;
    }
    int c = 0;
    for(int i=1;i<=e;i++){
        c += countpaths(s+i,e);
    }
    return c;
}

int main(){
    cout<<countpaths(1,4);
    return 0;
}