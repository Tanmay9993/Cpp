#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<char> s1 = {'a','b','c','a','c','c'};
    cout << "Loop" << endl;
    for (auto itr = s1.begin(); itr != s1.end(); ++itr)
    {
        cout << *itr << endl;
    }
    s1.insert('d');
    cout << "Loop" << endl;
    for (auto itr = s1.begin(); itr != s1.end(); ++itr)
    {
        cout << *itr << endl;
    }
    s1.erase('c');  
    cout << "Loop" << endl;
    for (auto itr = s1.begin(); itr != s1.end(); ++itr)
    {
        cout << *itr << endl;
    }

    if (s1.find('a') == s1.begin())
    {
        cout << "Present" << endl;
    }
    else
    {
        cout << "Missing" << endl;
    }
}