#include <stdio.h>

// returns 1 if no overflow occurred during unsigned addition
int uadd_ok(unsigned x, unsigned y)
{
        unsigned sum = x+y;
        return sum >= x;
}

// returns 1 if no overflow occurred during two's-complement addition
int tadd_ok(int x, int y)
{
        if (x > 0 && y > 0)
                return x+y > 0;
        else if (x < 0 && y < 0)
                return x+y < 0;
        else
                return 1;
}

// returns 1 if no overflow occurred during two's-complement multiplicaion
int tmult_ok(int x, int y)
{
        int p = x*y;
        // Either x is zero. or dividing p by x gives y
        return !x || p/x == y;
}

int main(void)
{
        return tmult_ok(2147483647, 1);
}