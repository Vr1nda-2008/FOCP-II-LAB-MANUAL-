#include <iostream>
using namespace std;
class student {
    private:
    static int marks; //static member variable is shared by all objects of the class
    //static member is declared, they are mostly defined outside the class 
    //multiple file have different definition of static member
    //it is recommended to define static member in the class because it is shared by all objects of the class
    // static member is defined to stop duplication of memory allocation as it violates it law.
    // to define it inside the class we have to use "inline" command.
    

    public:
    student(){
        marks=85;
    }
    friend void show(student s);
// can access private, protected too
    //line 17 tells the compiler that it is the friend of class.
    // allows the function to access private members
    
};
void show(student s){
    cout<<"Marks: "<<student::marks<<endl;
}


int main()
{ 
    student s1;
    show(s1);
    return 0;
}

