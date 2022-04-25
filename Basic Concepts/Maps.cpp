#include <iostream>
#include <map>
using namespace std;

int main()
{
    map <char,int> mp = 
    {
        {'a',1},
        {'b',2},
        {'c',3}
    };
    cout << mp['c'] << endl;
    mp.insert(pair<char,int>('d',4));

    cout << mp['d'] << endl;  
    pair<char,int> p1('e',5);

    mp.insert(p1);
    cout << mp['e'] << endl;

    cout << "Size" << endl;
    cout << mp.size() << endl;

    cout << "Loop" << endl;
    for (auto itr = mp.begin(); itr != mp.end(); ++itr)
    {
        cout << *itr << endl;
    }

    return 0;
}