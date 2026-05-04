//hirearchial inheritance is opposite of multiple inheritance.
//in multiple inheritance there are many parents but a single child. 
//in hirearchial inheritance there is a single parent but many children.

#include <iostream>
using namespace std;

class A{
public:
void show(){
    cout<<"calling A"<<endl;
}
};
class B : public A{ // hierarchical inheritance.
};
class C : public A{ // hierarchical inheritance.
};
class D: public B, public C{ //hybird inheritance.
};

int main() {

cout<<"by B: ";
    B b;
    b.show();
cout<<"by D: ";
    D d;
    d.B::show();
    return 0;
}