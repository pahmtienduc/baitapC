// Bài 14: Tính S(n) = x + x^3 + x^5 + … + x^2n + 1
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    int x, n;
    int i = 0;
    float tong = 0;
    printf("nhap vao so n :");
    scanf("%d", &n);
    printf("nhap vao so x :");
    scanf("%d", &x);
    while (i < n)
    {
        tong += pow(x, (2 * i + 1));
        i++;
    }
    printf("Tong la : %.0f", tong);
    getch();
    return 0;
}