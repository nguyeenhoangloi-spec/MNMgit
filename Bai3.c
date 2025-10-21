#include <stdio.h>
#include <math.h> // dùng cho hàm sqrt()

int main() {
    float a, b, c;
    float delta, x1, x2;

    printf("Giai phuong trinh bac 2: ax^2 + bx + c = 0\n");
    printf("Nhap a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0) {
        // Trường hợp a = 0 -> phương trình bậc nhất bx + c = 0
        if (b == 0) {
            if (c == 0)
                printf("Phuong trinh co vo so nghiem.\n");
            else
                printf("Phuong trinh vo nghiem.\n");
        } else {
            printf("Phuong trinh co nghiem duy nhat x = %.2f\n", -c / b);
        }
    } else {
        // Phương trình bậc 2
        delta = b * b - 4 * a * c;

        if (delta < 0)
            printf("Phuong trinh vo nghiem.\n");
        else if (delta == 0)
            printf("Phuong trinh co nghiem kep x = %.2f\n", -b / (2 * a));
        else {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Phuong trinh co 2 nghiem phan biet:\n");
            printf("x1 = %.2f\n", x1);
            printf("x2 = %.2f\n", x2);
        }
    }

    return 0;
}
