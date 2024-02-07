#include<iostream>
using namespace std;
// Hierarchial Inheritance

class Parent{
public:
    Parent(){
        cout<<"In Parent Class"<<endl;
    }
};

class Child1: public Parent{
public:
    Child1(){
        cout<<"In Child One"<<endl;
    }
};

class Child2: public Parent{
public:
    Child2(){
        cout<<"In Child Two"<<endl;
    }
};

int main(){
    Child2 c2;
    Child1 c1;
    return 0;
}