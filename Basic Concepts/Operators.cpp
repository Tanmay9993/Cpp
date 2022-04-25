#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a = 7;
    int b = 4;
    int sum = a + b;
    int sub = a - b;
    int pro = a * b;
    int mod = a % b;
    float div = float(a) / b; //float(b); 

    cout << "Arithmatic" << endl;
    cout << "Sum : " << sum << endl;
    cout << "Sub : " << sub << endl;    
    cout << "Pro : " << pro << endl; 
    cout << "Div : " << div << endl; 
    cout << "Mod : " << mod << endl; 
    int c = a++;
    cout << c << endl;
    int d = ++a;
    cout << d << endl;
    
    cout << "Comparison" << endl;
    bool check1 = a <= b;    
    cout << check1 << endl;
    bool check2 = a != b;    
    cout << check2 << endl;
    
    cout << "Logical" << endl;
    int x = 0;
    int y = 1;
    cout << (x && y) << endl;
    cout << (x || y) << endl;
    cout << !y << endl;

    return 0;
}