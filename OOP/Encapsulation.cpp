#include <iostream>
#include <string>
using namespace std;

class Employee  // Private by default
{
    private:     // Access specifiers : Public, Private, Protected
    string Name;
    string Company;
    int Age;

    public:
    void setName(string name)
    {
        Name = name;
    }
    string getName()
    {
        return Name;
    }
    void setCompany(string company)
    {
        Company = company;
    }
    string getCompany()
    {
        return Company;
    }
    void setAge(int age)
    {
        if (age > 20)
        {
            Age = age;
        }
    }
    int getAge()
    {
        return Age;
    }
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

    emp1.setAge(29);
    cout << "Name : " <<  emp1.getName() << endl;
    cout << "Age : " <<  emp1.getAge() << endl;

    emp2.setAge(17);
    cout << "Name : " <<  emp2.getName() << endl;
    cout << "Age : " <<  emp2.getAge() << endl;

    return 0;
}