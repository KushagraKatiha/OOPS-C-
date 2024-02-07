#include<iostream>
using namespace std;
// Multiple Inheritance

class Parent1{
public:
    Parent1(){
        cout<<"In Parent One"<<endl;
    }
};

class Parent2{
public:
    Parent2(){
        cout<<"In Parent Two"<<endl;
    }
};

class Child: public Parent1, public Parent2{
public:
    Child(){
        cout<<"In Child Class"<<endl;
    }
};

int main(){
    Child *c = new Child();
    return 0;
}