#include <stdio.h>

void xepLoai(float van, float toan, float anh) {
    float diemTB = (van * 2 + toan * 2 + anh) / 5;
    printf("Diem trung binh: %.2f\n", diemTB);
    if (diemTB < 3) {
        printf("Hoc luc: Yeu\n");
    } else if (diemTB < 5) {
        printf("Hoc luc: Trung binh\n");
    } else if (diemTB < 7.9) {
        printf("Hoc luc: Kha\n");
    } else {
        printf("Hoc luc: Gioi\n");
    }
}

int main() {
    float van, toan, anh;
    printf("Nhap diem Van, Toan, Anh: ");
    scanf("%f%f%f", &van, &toan, &anh);
    xepLoai(van, toan, anh);
    return 0;
}