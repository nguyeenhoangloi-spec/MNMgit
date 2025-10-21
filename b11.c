
#include <stdio.h>

void yc(int n) 
{
    for (int i = 1; i <= n; ++i) 
    {
        int spaces = n - i;
        int stars = 2 * i - 1;
        for (int s = 0; s < spaces; ++s) putchar(' ');
        for (int k = 0; k < stars; ++k) putchar('*');
        putchar('\n');
    }
}
