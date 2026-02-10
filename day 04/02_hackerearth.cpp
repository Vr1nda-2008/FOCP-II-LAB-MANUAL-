#include <iostream>
using namespace std;
#include <string>
int main() {
	string S;
  cin>> S;

  int length;
  length = S.size();
  int last = length - 1;
  

  for(int i= 0; i<length/2 ; i++){
     if(S[i] != S[last-i]){
        cout<<"NO"<< endl;
        return 0;
     } 
          cout<< "YES";
     }
 return 0;
}