// Viết hàm kiểm tra SNT
#include <stdio.h>
#include <math.h>
int KiemtraSNT(int x)
{
    if(x<=1) return 0;
    for(int i=2; i<x; i++)
    {
        if(x%i==0) return 0;
    }
    return 1;
}
int main ()
{
    int n;
    do 
    {
        printf("nhap N = ");
        scanf("%d", &n);
    }while(n<=1);
    if(KiemtraSNT(n)==0)
    {
        printf("%d khong la so nguyen to ", n);
    }
    else 
    {
        printf("%d la so nguyen to ", n);
    }
    return 0;
}