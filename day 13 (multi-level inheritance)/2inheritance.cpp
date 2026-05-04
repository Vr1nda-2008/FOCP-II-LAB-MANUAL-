// multi-level inheritance

#include <iostream>
using namespace std;

//grandparent class
class grandpa{
public:
void greatgrand(){
    cout<<"hiee from grandpa to his pa"<<endl;
}
};

//parent class
class parents: public grandpa{ // for maintaining the acess specifier public is used.
    // if we use private instead of public, the data from public becomes private in child class.
public:
void grandparents(){
    greatgrand();
    cout<<"hiee from pa to his pa"<<endl;
}
};

//child class
class child: public parents{
public:
void grandparents(){
    grandparents();
    cout<<"hiee from child to his pa"<<endl;
}
};  

int main(){
    child c1;
    c1.grandparents();
    return 0;
}
