#include <stdio.h>

int main() {
    int nam;

    printf("Nhap nam: ");
    scanf("%d", &nam);

    // Kiểm tra điều kiện năm nhuận
    if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0)) {
        printf("%d la nam nhuan\n", nam);
    } else {
        printf("%d khong phai la nam nhuan\n", nam);
    }

    return 0;
}
