//multiple inheritance.
/*
multiple inheritance: when a class inherits from more than one base class.
it is opposite of hierarchical inheritance.
*/

#include <iostream>
using namespace std;
class A
{
public:
    int x = 4;
    A()
    {
        cout << "x= " << x << endl;
    }
};

class B
{
public:
    int y;
    B()
    {
        cout << "y: " << y << endl;
    }
};
class Clas_ : public A, public B
{
    public:
    Clas_()
    {
        cout << "GEEZ!" << endl;
    }
};

int main()
{
    Clas_ obj();
    return 0;
}