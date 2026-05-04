#include<iostream>
using namespace std;

class base{
public:
virtual void show(){ //function overriding
    //works only when funtion signature is same
    //otherwise it is function hiding.
    cout<<"Base class"<<endl;
}
};
class derrived: public base{
void show(){
    cout<<"Derrived class"<<endl;
}
};
int main(){
    base* ptr;
    derrived d;
    ptr= &d;
    ptr->show(); // in compliere it is *ptr.show() be equals to d.show()
    //child class function is called
    return 0;
}