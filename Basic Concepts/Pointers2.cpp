#include <iostream>
using namespace std;

int main()
{
    int num = 3;
    int *pointer = &num;
    int val = *pointer;
    cout << "Number : " << num << endl;
    cout << "Address of 'num' : " << pointer << endl;
    cout << "Pointer : " << *pointer << endl;
    cout << "Value : " << val << endl;

    *pointer = 7;
    cout << "Number : " << num << endl;
    cout << "Address of 'num' : " << pointer << endl;
    cout << "Pointer : " << *pointer << endl;
    cout << "Value : " << val << endl;

    val = 10;
    cout << "Number : " << num << endl;
    cout << "Address of 'num' : " << pointer << endl;
    cout << "Pointer : " << *pointer << endl;
    cout << "Value : " << val << endl;

    return 0;
}

// Output

// Number : 3
// Address of 'num' : 0x16b7db4bc
// Pointer : 3
// Value : 3

// Number : 7
// Address of 'num' : 0x16b7db4bc
// Pointer : 7
// Value : 3

// Number : 7
// Address of 'num' : 0x16b7db4bc
// Pointer : 7
// Value : 10