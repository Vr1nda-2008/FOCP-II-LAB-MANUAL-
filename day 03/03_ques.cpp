#include <iostream>
using namespace std;

int main()
{
double c,f, choose;
cout<<"convert: \n 1. temperature in celsius: \n" << "2. temperature in fahehrenheit: \n" ;
cin>>choose;

if(choose ==1){
    cout<<"enter temperature in fahehrenheit: ";
    cin>>f;
    c= (5.0/9.0)*(f-32);
    cout<<"temperature in celsius: "<<c;
}
else if(choose ==2){
    cout<<"enter temperature in celsius: ";
    cin>>c;
    f= (9.0/5.0)*c + 32;
    cout<<"temperature in fahehrenheit: "<<f;
}

    return 0;
}