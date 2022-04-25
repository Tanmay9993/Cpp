#include <iostream>
#include <string>
using namespace std;

int main()
{
    float x = 6.45;
    double y = -4.321;
    if (x > y)
    {
        cout << x << " is greater" << endl;
    }
    else if (x < y)
    {
        cout << y << " is greater" << endl;
    }
    else
    {
        cout << "Both are equal" << endl;
    }
    return 0;
}