#include <iostream>
#include <string>
using namespace std;

int main()
{   
    string str = "Hello";
    cout << "For loop" << endl;
    for (int i = 0; i < str.length(); i++)
    {
        cout << str[i] << endl;
    }

    int i = 1;
    cout << "While loop" << endl;
    while(true)
    {
        i += i * 2;
        if (i > 6)
        {
            break;
        }
        else
        {
            cout << i << endl;
            continue;
        }
    }

    cout << "Do while loop" << endl;
    int j = 8;
    do
    {
        j = j / 2;
        cout << j << endl;
    }while(j != 0);

    return 0;
}