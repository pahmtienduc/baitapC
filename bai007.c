// Bài 7: Tính S(n) = ½ + 2/3 + ¾ + …. + n / n + 1
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    int n, i;
    float sum = 0;
    do
    {
        printf("\nnhap vao n :");
        scanf("%d", &n);
        if (n <= 0)
        {
            printf("Nhap n >0. Vui long nhap lai !");
        }
    } while (n <= 0); 
    for (i = 1; i <= n; i++)
    {
        sum += i / ((float)i + 1);
    }
    printf("S(n) = %f", sum);
    getch();
    return 0;
}