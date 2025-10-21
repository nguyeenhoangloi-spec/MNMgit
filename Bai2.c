#include <stdio.h>

void kiemTraNamNhuan() {
    int nam;
    printf("Nhap nam: ");
    scanf("%d", &nam);

    if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0))
        printf("%d la nam nhuan\n", nam);
    else
        printf("%d khong phai la nam nhuan\n", nam);
}
