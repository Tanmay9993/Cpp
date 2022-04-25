#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a = 2;
    int &b = a;
    cout << a << endl;
    cout << b << endl;
    
    a = 3;
    cout << a << endl;
    cout << b << endl;

    b = 4;
    cout << a << endl;
    cout << b << endl;
    // All variables are referencing to one value
    // Both variables pointing to same location and will have same value 
    cout << &b << endl;

    return 0;
}