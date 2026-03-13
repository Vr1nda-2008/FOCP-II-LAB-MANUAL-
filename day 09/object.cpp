#include <iostream>
using namespace std;

class students
{
private: // only accessible inside this class
    int marks;

protected: // accessible inside class (and derived class)
    int roll_no;

public: // accessible everywhere
    int name;
    // setter for private and protected data (creating functio to setdata)
    void setdata(int r, int n)
    {
        marks = r;
        roll_no = n;
        // creating a function to get data outside the function
        void getmarks(){
            return marks;
        }
         // inside public class
    }
};

int main()
{
    // object creation
    students s1; // class is A DATA TYPE IN C++

    // accessing public member
    s1.name = "alice";

    // setting private an dprotected value
    s1.setdata(90, 100);

    cout << "name of student is: " << s1.name << endl;
    cout << "roll no of student is: " << s1.roll_no << endl;
    cout << "marks of student is: " << s1.getmarks() << endl;
}