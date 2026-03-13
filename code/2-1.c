#include <stdio.h>

int main()
{
    printf("char: %u\n", sizeof('abc'));
    printf("short: %u\n", sizeof(4.2));
    printf("int: %u\n", sizeof(35));
    printf("unsigned int: %u\n", sizeof(-1));
    printf("long: %u\n", sizeof(1.23));
    printf("long long: %u\n", sizeof(1.2345));
    printf("float: %u\n", sizeof(3.58243));

    return 0;
}
