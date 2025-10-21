
#include "mylib.h"

int main() {
	int choice;
	do {
		printf("\n--- MENU CHON BAI ---\n");
		printf("1. So ngay trong thang\n");
		printf("2. Kiem tra nam nhuan\n");
		printf("3. Giai phuong trinh bac 2\n");
		printf("4. Xep loai hoc luc\n");
		printf("5. Tinh tien dien\n");
		printf("6. In bang cuu chuong\n");
		printf("7. Tinh giai thua\n");
		printf("8. Hien thi day so\n");
		printf("9. Nhap day so\n");
		printf("10. Day Fibonacci nho hon n\n");
		printf("11. In tam giac sao\n");
		printf("0. Thoat\n");
		printf("Chon bai (0-11): ");
		scanf("%d", &choice);
		switch (choice) {
			case 1: {
				int thang, nam;
				printf("Nhap thang: "); scanf("%d", &thang);
				printf("Nhap nam: "); scanf("%d", &nam);
				inSoNgayTrongThang(thang, nam);
				break;
			}
			case 2: {
				int nam;
				printf("Nhap nam: "); scanf("%d", &nam);
				kiemTraNamNhuan(nam);
				break;
			}
			case 3: {
				float a, b, c;
				printf("Nhap a, b, c: "); scanf("%f%f%f", &a, &b, &c);
				giaiPTBac2(a, b, c);
				break;
			}
			case 4: {
				float van, toan, anh;
				printf("Nhap diem Van, Toan, Anh: "); scanf("%f%f%f", &van, &toan, &anh);
				xepLoai(van, toan, anh);
				break;
			}
			case 5: {
				int soDien;
				printf("Nhap so dien: "); scanf("%d", &soDien);
				printf("Tien dien la: %d VND\n", tinhTienDien(soDien));
				break;
			}
			case 6: {
				int n;
				printf("Nhap so bang cuu chuong can in: "); scanf("%d", &n);
				inBangCuuChuong(n);
				break;
			}
			case 7: {
				int n;
				printf("Nhap so can tinh giai thua: "); scanf("%d", &n);
				giaiThua(n);
				break;
			}
			case 8: {
				int x;
				printf("Nhap x: "); scanf("%d", &x);
				hienthi(x);
				break;
			}
			case 9: {
				int n;
				printf("Nhap gia tri n: "); scanf("%d", &n);
				nhapdayso(n);
				break;
			}
			case 10: {
				long long n;
				printf("Nhap n: "); scanf("%lld", &n);
				fibonacci_nho(n);
				break;
			}
			case 11: {
				int n;
				printf("Nhap n: "); scanf("%d", &n);
				yc(n);
				break;
			}
			case 0:
				printf("Ket thuc chuong trinh.\n");
				break;
			default:
				printf("Lua chon khong hop le!\n");
		}
	} while (choice != 0);
	return 0;
}
