#include<iostream>
using namespace std;
// Inheritance and its modes

class Parent{
public: 
    int x;

protected:
    int y;

private:
    int z;
};

class Child1: public Parent{
    // x will remain public
    // y will remain protected
    // z will remain inaccessable
};

class Child2: protected Parent{
    // x will become protected
    // y will remain protected
    // z will remain inaccessable
};

class Child3: protected Parent{
    // x will become private
    // y will become private
    // z will remain inaccessable
};

int main(){
    Parent *p = new Parent();
    p->x = 5;
    cout<<p->x<<endl;

    return 0;
}