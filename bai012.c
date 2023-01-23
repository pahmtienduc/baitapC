// Bài 12: Tính S(n) = x + x^2 + x^3 + … + x^n
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    int n, i, x;
    float S = 0;
    printf("nhap vao so n :");
    scanf("%d", &n);
    printf("\nnhap vao so x :");
    scanf("%d", &x);

    for (i = 1; i <= n; i++)
    {
        S += pow(x, i);
    }
    printf("S(n) =%.0f", S);
    getch();
    return 0;
}