#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v1 = {1,2,3};
    cout << v1.front() << endl;
    cout << v1.back() << endl;
    cout << v1.size() << endl;

    v1.push_back(4);
    cout << "Size and capacity : " << endl;
    cout << v1.size() << endl;
    cout << v1.capacity() << endl;

    v1.push_back(5);
    v1.push_back(6);
    v1.push_back(7);
    cout << "Size and capacity : " << endl;
    cout << v1.size() << endl;
    cout << v1.capacity() << endl;

    v1.pop_back();
    v1.pop_back();
    cout << "Size and capacity : " << endl;
    cout << v1.size() << endl;
    cout << v1.capacity() << endl;

    v1.shrink_to_fit();
    cout << "Size and capacity : " << endl;
    cout << v1.size() << endl;
    cout << v1.capacity() << endl;

    v1.insert(v1.begin(),0);
    cout<< v1.front() << endl;

    v1.insert(v1.begin() + 2 ,8);
    cout<< v1[2] << endl;

    cout << "Loop" << endl;
    for (auto itr = v1.begin(); itr != v1.end(); ++itr)
    {
        cout << *itr << endl;
    }

    return 0;
}