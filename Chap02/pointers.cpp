// pointers.cpp by Bill Weinman [bw.org]
// updated 2020-06-24
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int x = 7;
    const int &y = x; // created a reference called y(&)
    int *ip = &x;     // It gives us the address of variable x

    cout << "x= " << x << endl;
    cout << "y= " << y << endl;
    cout << "*ip= " << *ip << endl;

    x = 20;
    cout << "x= " << x << endl;
    cout << "y= " << y << endl;
    cout << "*ip= " << *ip << endl;

    int z = 10;
    ip = &z;
    printf("The value of x is %d\n", x);
    printf("The value of y is %d\n", y);
    printf("The value of *ip is %d\n", *ip); // we print out the value of ip which supposed the value of x

    return 0;
}
