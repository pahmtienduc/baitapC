// Bài 9: Tính T(n) = 1 x 2 x 3…x N
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    int n, i = 1;
    int T = 1;
    do
    {
        printf("\nnhap vao so n (n>0):");
        scanf("%d", &n);
        if (n <= 0)
        {
            printf("nhap (n>0) . Vui long nhap lai!");
        }
    } while (n <= 0);
    while (i <= n)
    {
        T *= i;
        i++;
    }
    printf("T(n) = %d", T);
    getch();
    return 0;
}