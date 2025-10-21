#include <stdio.h>

void inSoNgayTrongThang(int thang, int nam) {
    int soNgay;

    // Xác định số ngày theo tháng
    switch (thang) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            soNgay = 31;
            break;
        case 4: case 6: case 9: case 11:
            soNgay = 30;
            break;
        case 2:
            // Kiểm tra năm nhuận
            if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0))
                soNgay = 29;
            else
                soNgay = 28;
            break;
        default:
            printf("Thang khong hop le!\n");
            return;
    }

    printf("Thang %d nam %d co %d ngay.\n", thang, nam, soNgay);
}

int main() {
    int thang, nam;

    printf("Nhap thang: ");
    scanf("%d", &thang);
    printf("Nhap nam: ");
    scanf("%d", &nam);

    inSoNgayTrongThang(thang, nam);

    return 0;
}
