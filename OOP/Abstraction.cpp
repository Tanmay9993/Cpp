#include <iostream>
#include <string>
using namespace std;

class AbstractEmployee // Abstract class
{
    virtual void AskPromotion() = 0; // Compulsory to define in derived class
};
class Employee : AbstractEmployee  
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
    void AskPromotion()
    {
        if (Age > 30)
        {
            cout << Name << " " <<"Promoted" << endl;
        }
        else
        {
            cout << Name << " " << "Not Promoted" << endl;
        }
    }
};
int main()
{
    Employee emp1 = Employee("ABC","XYZ",24);
    Employee emp2 = Employee("DEF","UVW",31);

    emp1.AskPromotion();
    emp2.AskPromotion();

    return 0;
}