#include <iostream>
using namespace std;


class Student{
    public:
    string name;
    int age;
    bool gender;

    Student(){
        cout<<"Default Constructor"<<endl;
    }
    Student(string n,int a,bool g){
        cout<<"Parameterized constructor"<<endl;
        name = n;
        age = a;
        g = gender;
    };

    Student(Student &a){ //deep copy constructor
        cout<<"Copy constructor"<<endl;
        name  = a.name;
        age  =a.age;
        gender = a.gender;
    };

    bool operator == (Student &a){ // To overcome operator overloading in main function
        if(name == a.name && age  == a.age && gender== a.gender){
            return true;
        }
        else{
            return false;
        }
    }

    void printInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Gender: "<<gender<<endl;
    }
    // Destructor called when main function returns
    ~ Student(){
        cout<<"Destructor called"<<endl; // for each object of class
    }
};
int main(){
    Student a("Rohit",20,1); //parameterized construtor
    a.printInfo();
    Student b; //Default constructor or non parameterized constructor

    Student c = a; // Shallow copy (only values is copied but pointers of both objects does not points to same location)
    c.printInfo();

    // Check if two constructors are same or not
    if(b==a){
        cout<<"b and a are same"<<endl;
    }
    else{
        cout<<"Not same"<<endl;
    }

    return 0;

}
