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
};
int main()
{
    Developer dev1 = Developer("Tan","Com",21,"C++");
    dev1.Use();
    dev1.Introduce();

    Moderator mod1 = Moderator("May","Pany",40,10);
    mod1.ModNum();
    mod1.AskPromotion();

    return 0;
}