
#include <stdio.h>

void inBangCuuChuong(int n) {
    printf("Bang cuu chuong %d:\n", n);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}
