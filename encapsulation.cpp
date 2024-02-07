#include<iostream>
using namespace std;
// Encapsulation
class Rectangle{
private:
    int l;
    int b;

public:         // we can access private data using 
    void setlength(int length){
        l = length;
    }
    void setbreadth(int breadth){
        b = breadth;
    }
    void printlength(){
        cout<<l<<endl;
    }
    void printbreadth(){
        cout<<b<<endl;
    }
};


int main(){
    Rectangle *r1 = new Rectangle;
    r1 -> setlength(15);
    r1 -> printlength();
    return 0;
}