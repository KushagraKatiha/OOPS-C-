#include<iostream>
using namespace std;
// making a constructor
class Rectangle{
public:
    int l;
    int b;

    Rectangle(){    //default constructor => no arguments passed
        l = 0;
        b = 0;
    }

    Rectangle(int x, int y){    //parameterises constructor => arguments passed
        l = x;
        b = y;
    }

    Rectangle(Rectangle &r){    //copy constructor
        l = r.l;
        b = r.b;
    }

    ~Rectangle(){
        cout<<"Destructor is called"<<endl;
    }
};

int main(){
    Rectangle *rectangle = new Rectangle();
    Rectangle *r1 = new Rectangle(5, 6);
    cout<<r1->l<<" "<<r1->b<<endl;

    delete r1;

    Rectangle r2(10,10);

    Rectangle r3 = r2;

    cout<<rectangle->l<<" "<<rectangle->b<<endl;
    cout<<r2.l<<" "<<r2.b<<endl;
    cout<<r3.l<<" "<<r3.b<<endl;

    return 0;
}