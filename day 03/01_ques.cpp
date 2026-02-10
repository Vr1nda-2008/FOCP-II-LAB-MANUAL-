#include <iostream>
using namespace std;

int main()
{
double marks1, marks2, marks3, avg;
    cout<<"marks of first student: \n";
    cin>>marks1;
    cout<<"marks of second student: \n";
    cin>>marks2;
    cout<<"marks of third student: \n";
    cin>>marks3;

    avg=(marks1+marks2+marks3)/3;
    cout<<"average marks of three students: "<<avg;
    return 0;
}