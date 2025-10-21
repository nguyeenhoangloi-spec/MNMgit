#include <stdio.h>

void giaiThua(int n) {
    long long gt = 1;
    for (int i = 1; i <= n; i++) {
        gt *= i;
    }
    printf("%d! = %lld\n", n, gt);
}

int main() {
    int so;
    printf("Nhap so can tinh giai thua: ");
    scanf("%d", &so);
    giaiThua(so);
    return 0;
}
