// Bài 10: Tính T(x, n) = x^n
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    int x, n;
    printf("nhap vao so x : ");
    scanf("%d", &x);
    printf("\nnhap vao so n : ");
    scanf("%d", &n);
    int T = pow(x, n);
    printf("T(x^n) = %d", T);
    getch();
    return 0;
}