#include <stdio.h>

void nhapTuanTu(int n) 
{
    int soNhap;
    int i = 1;
    
    printf("Hay nhap cac so tu 1 den %d theo thu tu:\n", n);
    
    while (i <= n) 
    {
        printf("Nhap so thu %d: ", i);
        scanf("%d", &soNhap);
        
        if (soNhap == i)
        {
            printf("Dung! Tiep tuc...\n");
            i++;
        } else {
            printf("Sai! So ban nhap la %d nhung phai la %d.\n", soNhap, i);
            printf("Bat dau lai tu dau!\n\n");
            i = 1; // Bắt đầu lại từ đầu
        }
    }
    
    printf("\nChuc mung! Ban da nhap dung toan bo tu 1 den %d!\n", n);
}

int main() 
{
    int n;
    
    printf("Nhap gia tri n: ");
    scanf("%d", &n);
    
    if (n <= 0) 
    {
        printf("Gia tri n phai lon hon 0!\n");
        return 1;
    }
    
    nhapTuanTu(n);
    
    return 0;
}
