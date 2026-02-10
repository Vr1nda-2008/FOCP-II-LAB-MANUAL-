#include <iostream>
using namespace std;

int main()
{
    cout << "select a digit from 0-9" << endl << endl;

    int num1, num2;
    cout << "enter first digit: ";
    cin >> num1;

    cout << "enter second digit: ";
    cin >> num2;

   while(num1<0 || num1 > 9){
    cout << endl << "WARNING: you must select a DIGIT from 0-9 only, TRY AGAIN!" << endl <<"select the first digit: " << endl;
    cin >> num1;
   }

   while(num2<0 || num2 > 9){
    cout << endl<< "WARNING: you must select a DIGIT from 0-9 only, TRY AGAIN!" << endl << "select the second digit: " << endl;
    cin >> num2;
   }

    int sum = num1 + num2;
    cout<< "the sum of two digits you selected is: " << sum << endl;

    return 0;
}
