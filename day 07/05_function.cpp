#include <iostream>
using namespace std;
int z=0;

void update(){
    static int z=1; // come in storage classes ( has four classes - static, auto, register, extern)
    z++;
     /* register is the fastest memory (not used for calculations but for intermediate calculations)
    */
    cout<<z<<endl;
}
void update1(){
     int z=1;
     z++;
    cout<<z<<endl;
    
}


int main(){
    update();// it will initialize z
    update(); // it will use previous z
    update();
    cout<<"static not use: "<<endl;
    update1();
    update1();
    update1();
    return 0;
}
