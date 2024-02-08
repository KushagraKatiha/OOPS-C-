#include<iostream>
using namespace std;
// Function Overriding

class Parent{
public:
    virtual void print(){           //virtual is used to allow function overriding
        cout<<"Parent Class"<<endl;
    }

    void show(){
        cout<<"Parent Class Show"<<endl;
    }
};

class Child: public Parent{
public:
    void print(){
        cout<<"Child Class"<<endl;
    }

    void show(){
        cout<<"Child Class Show"<<endl;
    }
};

int main(){
    Parent *p = new Parent;
    Child c;

    p = &c;

    p->print();
    p->show();

    return 0;
}