#include <stdio.h>

void nhapdayso(int n) 
{
    int sonhap;
    int i = 1;
    
    printf("Hay nhap cac so tu 1 den %d theo thu tu:\n", n);
    
    while (i <= n) 
    {
        printf("Nhap so thu %d: ", i);
        scanf("%d", &sonhap);
        
        if (sonhap == i)
        {
            i++;
        }
        else 
        {
            printf("Sai! So ban nhap la %d nhung phai la %d.\n", sonhap, i);
            printf("Bat dau lai tu dau!\n\n");
            i = 1;
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
    
    nhapdayso(n);
    
    return 0;
}
