//The Goal: Ask the user for a number. Tell them if it's Even or Odd.
#include<iostream>
using namespace std;

int main(){

    cout << "integer please: ";
    int num;
    cin >> num;

    if(num%2==0){
        cout << "the number" << num << "is even." << endl;
    
    }
    else{
        cout << "the number" << num << "is odd." << endl;
    }

    return 0;

}