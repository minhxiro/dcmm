#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

/*int main()
{
    int x = 9;
    int y = 5;

    printf("Value is %d\n", x < y); // I'm just evaluating this condition to print the integer

    if (x < y)
    {
        puts("x is greater than y");
    }
    else
    {
        printf("x is smaller than y");
    }
    return 0;
}*/

// braching condtional- switch statement //
int main()
{
    const int iONE = 1; // I declared those variable respectively
    const int iTWO = 2;
    const int iTHREE = 3;
    const int iFOUR = 4;

    int x = 3; // Then I also delcare another variable x is 3
    switch (x)
    {
    case iONE:
        puts("one");
        break; // The break is a branching statement that let the code breaks out the block to execution

    case iTWO:
        puts("two");
        break;
    case iTHREE:
        puts("three");
        break;

    case iFOUR:
        puts("four");
        break;

    default: // If x doesn't match any of these cases, the default statement will be executed
        puts("default");
        break;
    }
    return 0;
}