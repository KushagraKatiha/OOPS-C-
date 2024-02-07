#include<iostream>
using namespace std;

class Parent{
public:
    Parent(){
        cout<<"In Parent Class"<<endl;
    }
};

class Child: public Parent{
    public:
        Child(){
            cout<<"In Child Class"<<endl;
        }
};

int main(){
    Child *c1 = new Child();    // Single Inheritance
    return 0;
}