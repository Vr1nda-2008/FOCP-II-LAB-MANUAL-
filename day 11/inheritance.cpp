#include <iostream>
using namespace std;

//base class(parent) (jisse kuch derive kr rhe ho)
class animal{
    public:
        void eat(){
            cout << "animals are eating" << endl;
        }
};

//derived class(child) (jo base class se inherit hota hai)
class dog: public animal{
    public:
        void bark(){
            cout << "dog is barking" << endl;
        }
};

int main()
{
    dog d; //object of derived class

    d.eat(); //inherited from animal
    d.bark(); // dog's own function
    return 0;
}