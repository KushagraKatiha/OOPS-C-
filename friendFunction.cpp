#include<iostream>
using namespace std;
// Friend Funciton

class Parent{
    int x;
    int y;


public:
    Parent(int a, int b){
        x = a;
        y = b;
    }
    
    friend void print(Parent &obj);
};

void print(Parent &obj){
    cout<<obj.x<<" "<<obj.y<<endl;
}

int main(){
    Parent obj(4, 5);

    print(obj);

    return 0;
}