#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;
// I will declare 6 different variables in 6 types //
auto a = 8;           // a is for small integer
auto b = 12345678901; // b is for big integer
auto c = 2.3f;        // c for floating point
auto d = 2.3;         // d is without traiting f
auto e = true;        // e is for boolean value
auto f = 'd';         // f is for string value
int main()
{
    cout << typeid(a).name() << endl;
    cout << typeid(b).name() << endl;
    cout << typeid(c).name() << endl;
    cout << typeid(d).name() << endl;
    cout << typeid(e).name() << endl;
    cout << typeid(f).name() << endl;
    return 0;
}