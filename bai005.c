// Tính S(n) = 1 + 1/3 + 1/5 + … + 1/(2n + 1)
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    int n, i = 0;
    float sum = 0;
    do
    {
        printf("\nnhap n :");
        scanf("%d", &n);
        if (n < 1)
        {
            printf("Vui long nhap lai n (n>=1)");
        }
    } while (n < 1);
    for (i; i < n; i++)
    {
        sum += (float)1 / ((2 * i) + 1);
    }
    printf("S(n) = %f", sum);
    getch();
    return 0;
}