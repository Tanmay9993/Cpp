#include <iostream>
using namespace std;

int main()
{
    int *num = new int;
    cout << "num : " << num << endl;
    cout << "*num : " << *num << endl;
    cout << "&num : " << &num << endl;

    *num = 5;
    cout << "num : " << num << endl;
    cout << "*num : " << *num << endl;
    cout << "&num : " << &num << endl;
    
    return 0;
}

// Output

// num : 0x6000013a8040
// *num : 0
// &num : 0x16fd8b4b8

// num : 0x6000013a8040
// *num : 5
// &num : 0x16fd8b4b8