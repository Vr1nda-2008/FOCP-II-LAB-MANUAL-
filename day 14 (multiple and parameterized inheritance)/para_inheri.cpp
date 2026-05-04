//parameterized inheritance

#include<iostream>
using namespace std;

class base{
    public:
    base(int x){
        cout<<"base constuctor called: "<<x<< endl;
    }
};
class derived : public base{
public:
derived(int a, int b, int x): base(x){
    cout<<"derived constructor called: "<<a<<"  "<<b<<endl;
}
};
int main(){
    derived d(1,1+2, 3+4);
    return 0;
}