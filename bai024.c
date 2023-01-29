// Bài 24: Tính tổng tất cả các “ước số chẵn” của số nguyên dương n
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    int n, i = 1, tong = 0;
    do
    {
        printf("\nnhap vao so N :");
        scanf("%d", &n);
        if (n <= 0)
        {
            printf("nhap lai so n(n>0)");
        }
    } while (n <= 0);
    printf("cac uoc so chan cua %d la : ", n);
    while (i <= n)
    {
        if (n % i == 0)
        {
            if (i % 2 == 0)
            {
                printf("\t%d", i);
                tong += i;
            }
        }
        i++;
    }
    printf("\ntong = %d", tong);
    getch();
    return 0;
}
