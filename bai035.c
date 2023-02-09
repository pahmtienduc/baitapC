// nhập váo 1 mảng gôm n phần tử (0<n<=100)
// tính trung bình cộng của mảng
// tính trung bình cộng của cac số dương
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void Nhap_mang(int x[], int n)
{
    for(int i=0; i<n; i++)
    {
        printf("nhap phan tu thu a[%d] : ", i);
        scanf("%d", &x[i]);
    }
}
void Xuat_mang(int x[], int n)
{
    printf("mang vua nhap la : ");
    for (int i=0; i<n; i++)
    {
        printf("\t%d", x[i]);
    }
}
float Trung_Binh_cong(int x[], int n)
{
    int tong = 0;
    for(int i=0; i<n; i++)
    {
        tong+=x[i];
    }
    return (float)tong/n;
}
float TBC_So_Duong(int x[], int n)
{
    int tong =0;
    int SoDuong =0;
    for(int i=0; i<n; i++)
    {
        if(x[i]>=0)
        {
            tong+=x[i];
            SoDuong++;
        }
    }
    return SoDuong>0?(float)tong/SoDuong:-1;
}
int main ()
{
    int n, a[100];
    do 
    {
        printf("nhap phan n (0<n<=100) : ");
        scanf("%d", &n);
    }while(n<0 || n>100);
    Nhap_mang(a,n);
    Xuat_mang(a,n);
    printf("\nTrung Binh Cong = %.2f", Trung_Binh_cong(a,n));
    float tbsd=TBC_So_Duong(a,n);
    if(tbsd>0)
    {
        printf("\nTBC So Duong = %.2f", tbsd);
    }
    else 
    {
        printf("\nERROR!");
    }
    return 0;
}