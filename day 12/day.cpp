#include <iostream>
using namespace std;

void update(int *x){
    x=x+5;
}

int main() {
    int i=10;
    update(&i);
    cout<<i<<endl;
    return 0;
}