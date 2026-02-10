#include <iostream>
using namespace std;
#include <string>
int main() {

int len;
int x = 0;
int y = 0;
	string zoo;
cin>>zoo;
len = zoo.size();

for (int i = 0; i<len;i++) {
    if ( zoo[i] == 'z') {
x++;
    } 
    
        if (zoo[i] == 'o') {
            y++;
        }
       

    }
if (2*x == y) {
    cout <<"Yes";
} else {
    cout<<"No";
}

}