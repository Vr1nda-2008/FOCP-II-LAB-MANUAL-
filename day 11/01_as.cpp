#include <iostream>
using namespace std;

class person{
    private:
     string name;

     public:
       void setname(string n);
       void display();
     
};
// encapsulation: bundling of data and methods that operate on that data ()

void person::setname(string n){ 
       name = n;
    // void is refering to the return type of the function 
    //cause we are defining it outside the class

    // :: scope resolution operator
    /*
The scope resolution operator is written as :: and 
is mainly used in C++ to define or access members that belong to a particular scope.
    */
 
}