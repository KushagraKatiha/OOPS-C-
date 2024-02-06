#include<iostream>
using namespace std;

// Structure of a class
// class class_name{
    // int data1; 
    // int data2;

    // get_data1();
    // get_data2();
    // set_data1();
    // set_data1();
// };

// MAKE A CLASS FRUIT

class Fruit{
public:   // access specifier
    string name;
    string color;
};

class student{
    string name;
    string gender;
};

int main(){
// Making a object of class fruit
    Fruit apple; // variable
    apple.name = "Kashmiri Apple";
    apple.color = "Red";

    cout<<apple.name<<" => "<<apple.color<<endl;

// Creating a object using a new keyword
    Fruit *mango = new Fruit();    // gives us point to our new object
    mango->name = "Alphansho Mango";
    mango->color = "Yellow";

    cout<<mango->name<<" => "<<mango->color<<endl;

    return 0;
}