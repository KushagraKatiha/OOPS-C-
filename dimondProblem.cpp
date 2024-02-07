#include<iostream>
using namespace std;
// Dimond Problem

class A{
public:
    A(){
        cout<<"Class A"<<endl;
    }
};

class B: public A{
public:
    B(){
        cout<<"Class B"<<endl;
    }
};

class C: public A{
public:
    C(){
        cout<<"Class C"<<endl;
    }
};

class D: public B{
public:
    D(){
        cout<<"Class D"<<endl;
    }
};

class E: public C{
public:
    E(){
        cout<<"Class E"<<endl;
    }
};

class F: public D, public E{
public:
    F(){
        cout<<"Class F"<<endl;
    }
};

int main(){

    F f;
    return 0;
}