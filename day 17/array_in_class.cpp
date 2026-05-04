#include <iostream>
using namespace std;

class student{
    public:
string name;
int age;
void display(){
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
}
};

int main(){

    student s[3];

    s[0].name="Vind";
    s[0].age=18;
    s[1].name="Ram";
    s[1].age=19;
    s[2].name="Shyam";
    s[2].age=20;
    
    for(int i=0;i<3;i++){
        s[i].display();
    }
    return 0;
}