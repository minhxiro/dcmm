#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int main()
{

    char s[] = "Hello"; // So the Hello is just similar to array but special. Don't forget to terminate with 0 at the end bc they are null terminated
    // This is the for loop function, It will individually print out each elements of the character respectively
    for (int i = 0; s[i] != 0; ++i) // I have an index start from 0 and it goes until the element not a 0
    {
        printf("char is %c\n", s[i]);
    }

    for (char *cp = s; *cp != 0; ++cp) // I have an index start from 0 and it goes until the element not a 0
    {
        printf("char is %c\n", *cp); // instead of subscripting the array, I can dereference the pointer
    }

    return 0;
}