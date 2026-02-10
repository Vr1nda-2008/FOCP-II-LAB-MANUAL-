#include <iostream>
using namespace std;

int main()
{
    double item_num, price,quantity, discount;

cout<<">>item number: ";
cin>>item_num;
cout<<">>price: ";
cin>>price;
cout<<">>quantity: ";
cin>>quantity;

discount= (quantity*price)*0.2;

cout<<"amount to be paid: "<<(quantity*price)-discount;
    return 0;
}