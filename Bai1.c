#include <stdio.h>

void inSoNgayTrongThang() {
    int thang;
    printf("Nhap thang: ");
    scanf("%d", &thang);

    switch (thang) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("Thang %d co 31 ngay\n", thang);
            break;
        case 4: case 6: case 9: case 11:
            printf("Thang %d co 30 ngay\n", thang);
            break;
        case 2:
            printf("Thang 2 co 28 ngay (khong tinh nam nhuan)\n");
            break;
        default:
            printf("Thang khong hop le!\n");
    }
}
