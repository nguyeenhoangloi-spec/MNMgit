#include <stdio.h>

long long giaiThua(int n) {
    long long gt = 1;
    for (int i = 1; i <= n; i++) {
        gt *= i;
    }
    return gt;
}

int main() {
    int so;
    printf("Nhap so can tinh giai thua: ");
    scanf("%d", &so);
    printf("%d! = %lld\n", so, giaiThua(so));
    return 0;
}
