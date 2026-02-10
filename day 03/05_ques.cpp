#include <iostream>
using namespace std;

int main()
{
    int a, temp, b;
    cout << "enter two numbers: ";
    cin >> a >> b;
    cout << "Before swap: a = " << a << ", b = " << b;
    temp = a;
    a = b;
    b = temp;
    cout << "\nAfter swap: a = " << a << ", b = " << b;

    return 0;
}
