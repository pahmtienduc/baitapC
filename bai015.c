// Bài 15: Tính S(n) = 1 + 1/1 + 2 + 1/ 1 + 2 + 3 + ….. + 1/ 1 + 2 + 3 + …. + N
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    int n, i = 1, T = 0;
    float S = 0;
    do
    {
        printf("\nnhap vao so n (n>0):");
        scanf("%d", &n);
        if (n <= 0)
        {
            printf("nhap (n>0). Vui long nhap lai! ");
        }
    } while (n <= 0);
    while (i <= n)
    {
        T += i;
        S += ((float)1 / T);
        i++;
    }
    printf("S(n) = %f", S);
    getch();
    return 0;
}