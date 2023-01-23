// Bài 8: Tính S(n) = ½ + ¾ + 5/6 + … + 2n + 1/ 2n + 2
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    int n, i;
    float tong = 0;
    do
    {
        printf("\nnhap vao so n (n>0) :");
        scanf("%d", &n);
        if (n <= 0)
        {
            printf("Nhap (n>0). Vui long  nhap lai!");
        }
    } while (n <= 0);
    for (i = 0; i <= n; i++)
    {
        tong += ((float)(2 * i + 1) / (2 * i + 2));
    }
    printf("S(n) = %f", tong);
    getch();
    return 0;
}