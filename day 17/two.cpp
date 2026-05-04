#include <iostream>
using namespace std;

class student
{
public:
    string name;
    int age;
    student(string n, int a)
    {
        name = n;
        age = a;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main()
{
    // using parameterized constructor
    student s[3] = {student("Vind", 18),
                    student("Ram", 19),
                    student("Shyam", 20)};
    for (int i = 0; i < 3; i++)
    {
        s[i].display();
    }
    return 0;
}