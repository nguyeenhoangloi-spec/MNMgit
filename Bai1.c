#include <stdio.h>

int main() {
    int month, year;

    printf("Nhap vao thang (1-12): ");
    scanf("%d", &month);

    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("Thang %d co 31 ngay.\n", month);
            break;

        case 4: case 6: case 9: case 11:
            printf("Thang %d co 30 ngay.\n", month);
            break;

        case 2:
            printf("Nhap vao nam: ");
            scanf("%d", &year);
            if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
                printf("Thang 2 nam %d co 29 ngay (nam nhuan).\n", year);
            else
                printf("Thang 2 nam %d co 28 ngay.\n", year);
            break;

        default:
            printf("Thang khong hop le! Vui long nhap tu 1 den 12.\n");
    }

    return 0;
}
