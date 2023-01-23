// Bài 4: Tính S(n) = ½ + ¼ + … + 1/2n
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    int n, i = 1;
    printf("nhap vao so n : ");
    scanf("%d", &n);
    float tong = 0;
    while (i <= n)
    {
        tong += ((float)1 / (2 * i));
        i++;
    }
    printf("S(n)=%.2f", tong);
    getch();
    return 0;
}