//simple inheritance

#include <iostream>
using namespace std;

//base class(parent) (jisse kuch derive kr rhe ho)
class animal{
    public:
        void eat(){
            cout << "animals are eating" << endl;
        }
        animal(){
            cout << "animal constructor called" << endl;
            eat();
        }
};

//derived class(child) (jo base class se inherit hota hai)
class dog: public animal{
    public:
        void bark(){
            cout << "dog is barking" << endl;
        }
        dog(){
            cout << "dog constructor called" << endl;
        }
};

int main()
{
    dog d; //object of derived class

    // hirearchy will be followed i.e. in parent class constructor will be called first and then in child class constructor.
    d.bark();
    return 0;
}
// when there is constructor, the complier creates a EMPTY construtor and calls it.
//no matter what! HIREARCHY MUST BE FOLLOWED.😈