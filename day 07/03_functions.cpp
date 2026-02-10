// function overloading (same name different parameters/functions)

#include<iostream>
using namespace std;

int area(int x, int y)
{
    return x * y;
}
int area(int x)
{
    return x * x;
}

int main(){
    int length, width;
    cout << "Provide Length: ";
    cin >> length;
    cout << "Provide Width: ";
    cin >> width;
    int result = area(length);
    cout << "Area of Rectangle: " << result << endl;

    return 0;
}