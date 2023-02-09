// MẢNG
#include <stdio.h>
void Nhap_Mang(int n, int a[])
{
    for(int i=0; i<n; i++)
    {
        printf("nhap phan tu thu a[%d] : ", i);
        scanf("%d", &a[i]);
    }
}
void Xuat_Mang(int n, int a[])
{
    printf("Mang vua nhap la : ");
    for(int i=0; i<n; i++)
    {
        printf("\t%d", a[i]);
    }
}
int tinh_tong(int n, int a[])
{
    int tong = 0;
    for (int i=0; i<n; i++)
    {
        tong += a[i];
    }
    return tong;
}
int main ()
{
    int n, a[100];
    do 
    {
        printf("nhap phan tu N (0<n<100) : ");
        scanf("%d", &n);
    }while(n<0 || n>100);
    Nhap_Mang(n,a);
    Xuat_Mang(n,a);
    printf("\nTong = %d ", tinh_tong(n,a));
    return 0;
}