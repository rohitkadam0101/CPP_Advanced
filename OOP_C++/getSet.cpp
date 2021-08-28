// get and set methods are used to access private variables outside the class
#include <iostream>
using namespace std;

class Student{
    private:
    string name;
    // By default data memebers are private
    public:
    int roll;
    bool gender;

    void setName(string s){ //Setter method for private data member name
        name = s;
    }
    void getName(){
        cout<<name<<endl;
    }
    void display(){ // member function
        cout<<gender<<endl;
        cout<<roll<<endl;
    }
};
int main(){
    Student arr[3]; // array of objects
    for(int i=0;i<3;i++){
        cout<<"Name: ";
        string s;
        cin>>s;
        arr[i].setName(s);
        cout<<"Roll No.";
        cin>>arr[i].roll;
        cout<<"Gender:";
        cin>>arr[i].gender;
    }
    for(int i=0;i<3;i++){
        arr[i].getName();
        arr[i].display();
    }
    
    return 0;
}