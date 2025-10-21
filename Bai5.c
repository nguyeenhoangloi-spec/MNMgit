
#include <stdio.h>

int tinhTienDien(int soDien) {
    if (soDien <= 100) {
        return soDien * 500;
    } else if (soDien <= 350) {
        return 100 * 500 + (soDien - 100) * 550;
    } else {
        return 100 * 500 + 250 * 550 + (soDien - 350) * 650;
    }
}
