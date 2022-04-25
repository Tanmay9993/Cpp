#include <iostream>
#include <string>
using namespace std;

int add(int x, int y)
{
    return x + y;
}
void sub()
{
    float a = 5.6, b = 3.4;
    cout << a - b << endl;
}
pair<int,int> makePair(int x,int y)
{
    return pair<int,int>(x,y);
}
void swap_pointer(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void swap_reference(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
int main()
{
    int result = add(8,3);
    cout << result << endl;

    sub();

    cout << makePair(3,7).first << endl;
    cout << makePair(3,7).second << endl;

    cout << "Swapping with pointers" << endl;
    int c = 6, d = 9;
    cout << c << endl;
    cout << d << endl;
    swap_pointer(&c,&d);
    cout << c << endl;
    cout << d << endl;

    cout << "Swapping with references" << endl;
    int e = 3, f = 5;
    cout << e << endl;
    cout << f << endl;
    swap_reference(e,f);
    cout << e << endl;
    cout << f << endl;

    return 0;
}