// Bài 3: Tính S(n) = 1 + ½ + 1/3 + … + 1/n
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    int n, i = 1;
    float s = 0;
    printf("nhap vao so n : ");
    scanf("%d", &n);
    while (i <= n)
    {
        s += ((float)1 / i);
        i++;
    }
    printf("S(n) = %.2f ", s);
    getch();
    return 0;
}