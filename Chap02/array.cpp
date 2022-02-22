// array.cpp by Bill Weinman [bw.org]
// updated 2020-07-07
#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
    int array[] = {1, 2, 3, 4, 5};

    int x = array[3]; // 3 is the fourth element so when I run it, it will say x = 4 which means the fourth element
    cout << "x is " << x << endl;
    array[2] = 95; // When I change the third value 3 to 95, the compiler will update it to 95 because 2 is the 3rd value and it is updated to 95
    for (int i : array)
    {
        printf("%d ", i);
    }
    puts("");
    return 0;
}
