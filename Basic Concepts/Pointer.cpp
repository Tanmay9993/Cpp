#include <iostream>
#include <string>
using namespace std;

int main()
{
    int x = 2;
    int &y = x;
    int *z = &y;
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;
    cout << *z << endl;

    cout << "Changing pointer value" << endl;
    *z = 3;
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;
    cout << *z << endl;

    cout << "Pointer with array" << endl;
    int a[] = {1,2,3};
    int *head = a;
    for (int i = 0; i < 3; i++)
    {
        *head = i + 1;
        cout << *head << endl;

    }

    return 0;
}