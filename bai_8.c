
#include <stdio.h>

void hienthi(int x) 
{
    for (int i = 1; i <= x; i++) 
    {
        for (int j = 1; j <= i; j++) 
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}
