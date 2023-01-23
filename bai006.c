// Bài 6: Tính S(n) = 1/1×2 + 1/2×3 +…+ 1/n x (n + 1)
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    int n, i = 1;
    float s = 0;
    do
    {
        printf("\nnhap vao n ( n>0) :");
        scanf("%d", &n);
        if (n <= 0)
        {
            printf("Nhap n>0. Vui long nhap lai !");
        }
    } while (n <= 0);
    while (i <= n)
    {
        s += 1 / ((float)i * (i + 1));
        i++;
    }
    printf("S(n) = %f", s);
    getch();
    return 0;
}