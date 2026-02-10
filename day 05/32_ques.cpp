/*32. A stock market app tracks first and second highest stock values. Implement a solution to find the largest
and second largest number in an array of size 5. */

#include <iostream>
using namespace std;
#include<conio.h>


int main()
{
    system("cls");
    int array[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        cout << "Enter" << i + 1 << " numbers for stock market app: " << endl;
        cin >> array[i];
        for(int j=0; j<i; j++){
            if(array[i]>array[j]){
                
               
            }

        }
    }

return 0;
}