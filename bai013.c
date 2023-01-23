// Bài 13: Tính S(n) = x^2 + x^4 + … + x^2n
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    int n, i = 1, x;
    float S = 0;
    printf("nhap n:");
    scanf("%d", &n);
    printf("\nnhap x :");
    scanf("%d", &x);
    while (i <= n)
    {
        S += pow(x, (2 * i));
        i++;
    }
    printf("S(n) =%.0f", S);
    getch();
    return 0;
}