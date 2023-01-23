// Bài 11: Tính S(n) = 1 + 1.2 + 1.2.3 + … + 1.2.3….N
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    int n, i;
    int S = 1;
    printf("nhap vao so n :");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        S = 1 * S * i;
    }
    printf("S(n) =%d", S);
    getch();
    return 0;
}