#include <iostream>
using namespace std;

int main()
{
    int *x = new int;
    int &y = *x;
    y = 4;

    cout << *x << endl;
    cout << x << endl;
    cout << &x << endl;

    cout << &y << endl;
    cout << y << endl;
    
}

// Output

// 4
// 0x6000001e4040
// 0x16b1ff4b8
// 0x6000001e4040
// 4