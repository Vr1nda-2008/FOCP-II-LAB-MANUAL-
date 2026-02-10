#include <iostream>
#include <conio.h>
using namespace std;
void swap(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
    cout << "Swapped Values: " << x << ", " << y << endl;
}
int main()
{
    system("cls");
    int num1, num2;
    cout << "Provide First Number: ";
    cin >> num1;
    cout << "Provide Second Number: ";
    cin >> num2;
    cout << "Before Swapping: " << num1 << ", " << num2 << endl;
    swap(num1, num2); //call by reference

    return 0;
}