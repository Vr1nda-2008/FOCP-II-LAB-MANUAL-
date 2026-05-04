#include <iostream>
using namespace std;
//abstract class, which has atleast one pure function
//object cannot be created
//can be inherited
//the function can be defined in the child class.
class Animal{
public:
virtual void sound()=0; //pure virtual function, (no body of code)

};
//child domination, cause of overriding
//derived class

class Dog:public Animal{
public:
void sound(){
    cout<<"dog Bark"<<endl;
}
};
class Cat:public Animal{
public:
void sound(){
    cout<<"cat Meow"<<endl;
}
};

int main(){
    Dog d;
    d.sound();
    Cat c;
    c.sound();
    return 0;
}
