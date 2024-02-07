#include<iostream>
using namespace std;
// Multi-Level Inheritance

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

class GrandChild: public Child{
public:
    GrandChild(){
        cout<<"In Grand Child Class"<<endl;
    }
};

int main(){
    GrandChild *GC = new GrandChild();
    Parent P;
    Child C;
    return 0;
}