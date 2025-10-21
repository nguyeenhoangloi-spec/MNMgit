
#include <stdio.h>

void fibonacci_nho(long long n) 
{
    if (n <= 0) return;
    unsigned long long a = 0, b = 1;
    int first = 1;
    while (a < (unsigned long long)n) 
    {
        if (!first) putchar(' ');
        printf("%llu", a);
        first = 0;
        unsigned long long next = a + b;
        a = b;
        b = next;
    }
    putchar('\n');
}

