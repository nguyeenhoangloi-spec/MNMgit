
#include <stdio.h>

void kiemTraNamNhuan(int nam) {
    if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0)) {
        printf("Nam %d la nam nhuan.\n", nam);
    } else {
        printf("Nam %d khong phai la nam nhuan.\n", nam);
    }
}
