/*A manufacturing QC system checks defect codes divisible by both 3 and 5. 
Implement a solution to store 5 elements in an array and count how many numbers are divisible by 3 and 5. */

#include <iostream>
using namespace std;

int main()
{
    int array[5];
    int i, count = 0;
// input 5 numbers and check if they are divisible with 3 and 5
    for (i = 0; i < 5; i++)
    {
        cout << "Enter number for manufacturing QC check" << i + 1 << ": ";
        cin >> array[i];

        if (array[i] % 3 == 0 && array[i] % 5 == 0)
        {
            count++;
        }
    }

    cout << "Count of numbers divisible by 3 and 5 is: " << count << endl;
    return 0;
}
