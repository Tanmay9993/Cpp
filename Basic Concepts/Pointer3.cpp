#include <iostream>
using namespace std;

int main()
{
    int i = 2, j = 3, k =4;
    int *p = &i, *q = &j, *r = &k;

    cout << i << j << k << *p << *q << *r << endl;

    k = i;
    cout << i << j << k << *p << *q << *r << endl;

    p = q;
    cout << i << j << k << *p << *q << *r << endl;

    *q = *r;
    cout << i << j << k << *p << *q << *r << endl;

    return 0;
}
 
// Ouput

// 234234
// 232232
// 232332
// 222222