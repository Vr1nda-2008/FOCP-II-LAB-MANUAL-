#include<iostream>
using namespace std;

class base{
public:
void show(){
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
    ptr->show(); // in compliere it is *ptr.show()
    //base class function is called
    return 0;
}