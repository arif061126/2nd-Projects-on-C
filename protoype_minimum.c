#include <stdio.h>

double min2 (double x, double y)
{
    if (x<y)
        return x;
    else
        return y;
}



double min3(double x, double y, double z)
{
    if (x<y)
        return min2(x,z);
    else
        return min2(y,z);
}
