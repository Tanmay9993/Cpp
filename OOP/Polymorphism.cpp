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
    string Company;
    int Age;

    protected:
    string Name;

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
    void Introduce()
    {
        cout << "Name : " << Name << endl;
        cout << "Company : " << Company << endl;
        cout << "Age : " << Age << endl;
    }
    virtual void Work() // If another function exists in the derived class then that is executed
    {
        cout << "Employee is working" << endl;
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
class Developer : public Employee      // Inheritance is private by default
{
    public:
    string FavProLang;
    Developer (string name, string company, int age, string lang) : Employee (name,company,age)
    {
        FavProLang = lang;
    }
    void Use()
    {
        cout << Name << " uses " << FavProLang << endl;
    }
    void Work()
    {
        cout << "Developer is working" << endl;
    }
};
class Moderator : public Employee
{
    public:
    int Mod;
    void ModNum()
    {
        cout << Name << " mods " << Mod << endl;
    }
    Moderator (string name, string company, int age, int mod) : Employee (name,company,age)
    {
        Mod = mod;
    }
    void Work()
    {
        cout << "Moderator is working" << endl;
    }
};
int main()      // Polymorphism : Parent class is used to refer to a child class
{
    Developer dev1 = Developer("Tan","Com",21,"C++");
    Moderator mod1 = Moderator("May","Pany",40,10);

    dev1.Work();
    mod1.Work();

    Employee* emp1 = &dev1; // With pointers
    Employee* emp2 = &mod1;

    emp1->Work();
    emp2->Work();

    return 0;
}