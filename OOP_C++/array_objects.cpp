#include <iostream>
using namespace std;

class Student{
    // By default data memebers are private
    public:
    string name;
    int roll;
    bool gender;

    void display(){ // member function
        cout<<name<<endl;
        cout<<gender<<endl;
        cout<<roll<<endl;
    }
};
int main(){
    Student arr[3]; // array of objects
    for(int i=0;i<3;i++){
        cout<<"Name: ";
        cin>>arr[i].name;
        cout<<"Roll No.";
        cin>>arr[i].roll;
        cout<<"Gender:";
        cin>>arr[i].gender;
    }
    for(int i=0;i<3;i++){
        arr[i].display();
    }
    
    return 0;
}