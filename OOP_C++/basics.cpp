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
    Student a; // object is instance of class
    a.name = "Rohit";
    a.gender = 1;
    a.roll = 10;
    a.display();
    return 0;
}