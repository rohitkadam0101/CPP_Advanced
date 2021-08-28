#include <iostream>
using namespace std;

// To get bit left shift 1 by given pos and then take and of it
int getBit(int a, int pos){
    return ((a&(1<<pos))!=0);
}

// to set bit 1>>pos and take or   => it only sets one at the position
int setBit(int a,int pos){  
    return a|(1<<pos);

}
//clear bit write zero for particular position of bit

int clearBit(int a,int pos){
    return a&(~(1<<pos));
}

// to update = clearbit + setbit

int updateBit(int a,int pos,int val){
    int n  = a &(~(1<<pos));  //clear bit
    return (n|(val<<pos));
    
}
int main(){
    cout<<getBit(5,2)<<endl;
    cout<<setBit(5,3)<<endl;
    cout<<clearBit(5,2)<<endl;
    cout<<updateBit(5,2,0)<<endl;
    return 0;
}