#include <iostream>
#include <string>
using namespace std;

class Employee // Private by default
{
public: // Access specifiers : Public, Private, Protected
    string Name;
    string Company;
    int Age;

    void introduce()
    {
        cout << "Name : " << Name << endl;
        cout << "Company : " << Company << endl;
        cout << "Age : " << Age << endl;
    }
};
int main()
{
    Employee emp1;
    emp1.Name = "abc";
    emp1.Company = "xyz";
    emp1.Age = 24;
    emp1.introduce();

    return 0;
}