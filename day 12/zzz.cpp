#include <iostream>
using namespace std;

class demo{
public:
demo(){
      cout << "constructor called: Object created " << endl;
}
~demo(){
      cout << "destructor called: Object destroyed " << endl;
      /*
      destructor: (called automatically when object is destroyed)
      it is used to free the memory allocated by the constructor
      it is called automatically when object goes out of scope
      */
}
};

int main() {
     
     return 0;
}
