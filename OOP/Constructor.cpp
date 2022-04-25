#include <iostream>
#include <string>
using namespace std;

class Employee  // Private by default
{
    public:     // Access specifiers : Public, Private, Protected
    string Name;
    string Company;
    int Age;

    void introduce()
    {
        cout << "Name : " << Name << endl;
        cout << "Company : " << Company << endl;
        cout << "Age : " << Age << endl;
    }

    Employee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }
};
int main()
{
    Employee emp1 = Employee("ABC","XYZ",24);
    emp1.introduce();

    Employee emp2 = Employee("DEF","UVW",31);
    emp2.introduce();

    return 0;
}