#include <iostream>

using namespace std;

int z=0; // global variable

int main()
{ //any function in {} is local function: as we cannot access it outside those { brackets }


    std::cout << "Hello World!" << std::endl;
    // std:: is used to avoid confusion with other libraries
    //  :: is used to access the namespace of a library (to call out the cout function and endl function)
    // scope of variables: local (inside the function) and global (outside the function)


    return 0;
}
// global is of two types: