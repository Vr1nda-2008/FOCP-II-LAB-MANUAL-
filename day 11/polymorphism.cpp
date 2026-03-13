#include <iostream>
using namespace std;

class math{
    public:
    //function with 2 parameters
        int add(int a, int b){
            return a+b;
        }
        //function with 3 parameters
        int add(int a, int b, int c){
            return a+b+c;
        }
        //function with 2 parameters
        double add(double a, double b){
            return a+b;
        }
};

int main(){
    math m;
    cout <<"sum of 1 and 2 is: " << m.add(1,2) << endl;
    cout <<"sum of 1,2 and 3 is: " << m.add(1,2,3) << endl;
    cout <<"sum of 1.5 and 2.5 is: " << m.add(1.5,2.5) << endl;
    return 0;
}
