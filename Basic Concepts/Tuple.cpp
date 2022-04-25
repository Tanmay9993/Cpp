#include <iostream>
#include <tuple>
using namespace std;

int main()
{
    tuple <int,string> person(1,"Tan");
    cout << get<1>(person) << endl;
    get<1>(person) = "May";
    cout << get<1>(person) << endl;

    tuple <int,char,float> thing;
    thing = make_tuple(102,'a',3.42);
    cout << get<0>(thing) << endl;
    cout << get<1>(thing) << endl;
    cout << get<2>(thing) << endl;

    tuple <int,int> t1 = make_tuple(1,2);
    tuple <int,int> t2 = make_tuple(3,4);
    cout << get<0>(t1) << endl;
    cout << get<0>(t2) << endl;
    t1.swap(t2);
    cout << get<0>(t1) << endl;
    cout << get<0>(t2) << endl;

    int x,y;
    tie(x,y) = t1;
    cout << x << endl;
    cout << y << endl;

    tuple <int> a(10);
    tuple <char> b('t');
    tuple c = tuple_cat(a,b);
    cout << get<0>(c) << endl;
    cout << get<1>(c) << endl;

    return 0;
}