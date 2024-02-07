#include<iostream>
using namespace std;
// Function Overloading

class Sum{
public:
    void add(int x, int y){
        cout<<"Sum of two: "<<x+y<<endl;
    }

    void add(int x, int y, int z){
        cout<<"Sum of three: "<<x+y+z<<endl;
    }

    void add(int x, int y, int z, int a){
        cout<<"Sum of four: "<<x+y+z+a<<endl;
    }
};
int main(){
    Sum square; 
    square.add(4, 5);
    square.add(4, 5, 6);
    square.add(4, 5, 6, 10);

    return 0;
}