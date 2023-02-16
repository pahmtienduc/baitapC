// mảng thỏa điều kiện
#include <stdio.h>
#include <math.h>
void Nhap_mang(int x, int a[])
{
    for (int i = 0; i < x; i++)
    {
        printf("nhap a[%d] : ", i);
        scanf("%d", &a[i]);
    }
}
int Dieu_kien(int x)
{
    return (x % 2 == 0 && x % 3 == 0);
}
int SNT(int n)
{
    if (n < 1)
    {
        return 0;
    }
    for (int i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n, a[100];
    printf("nhap vao n = ");
    scanf("%d", &n);
    Nhap_mang(n, a);
    printf(" so chia het cho 3 la : ");
    for (int i = 0; i < n; i++)
    {
        if (Dieu_kien(a[i]))
        {
            printf("\t%d", a[i]);
        }
    }
    printf("\n So nguyen to : ");
    for (int i = 0; i < n; i++)
    {
        if (SNT(a[i]))
        {
            printf("\t%d", a[i]);
        }
    }
    return 0;
}