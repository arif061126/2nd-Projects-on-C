#include <stdio.h>

int z = 77;

void myfunc(int x)
{
    x = 33;
    z = 0;
    return;
}

int main(void)
{
    int x = 1; int y = 2;
    printf("1: x=%i, y=%i, z=%i\n", x, y, z);
    myfunc(x);
    printf("2: x=%i, y=%i, z=%i\n", x, y, z);
    if (1)
    {
        int x = 4;
        y = 5;
        printf("3: x=%i, y=%i, z=%i\n", x, y, z);
    }
    printf("4: x=%i, y=%i, z=%i\n", x, y, z);
    return 0;
}
