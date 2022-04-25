#include <iostream>
#include <string>
using namespace std;

int main()
{
    int arr1[3] = {1,2,3};
    char arr2[] = {'a','b','c','d','e'};
    string arr3[] = {"tan","may"};
    
    cout << "Arrays" << endl;
    cout << arr1 << endl;
    cout << arr1[2] << endl;
    arr2[0] = 'A';
    cout << arr2[0] << endl;
    cout << sizeof(arr3) / sizeof(arr3[0]) << endl;

    cout << "Garbage Values" << endl;
    float gar[3];
    cout << gar[0] << endl;
    cout << gar[1] << endl;
    cout << gar[2] << endl;
    
    return 0;
}