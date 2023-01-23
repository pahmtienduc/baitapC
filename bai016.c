// Bài 16: Tính S(n) = x + x^2/1 + 2 + x^3/1 + 2 + 3 + … + x^n/1 + 2 + 3 + …. + N
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    int x, n, i = 1;
    int T = 0;
    float S = 0;
    do
    {
        printf("\nnhap vao so n (n>0) :");
        scanf("%d", &n);
        if (n <= 0)
        {
            printf("Nhap (n>0). Vui long nhap lai!");
        }
    } while (n <= 0);
    printf("nhap vao so x:");
    scanf("%d", &x);
    while (i <= n)
    {
        T += i;
        S += ((float)pow(x, i) / T);
        i++;
    }
    printf("S(n)=%f", S);
    getch();
    return 0;
}