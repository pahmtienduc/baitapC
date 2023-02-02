// Viết hàm in ra tất cả SNT nhỏ hơn n(n>1)
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int KTSNT(int x)
{
    if (x <= 1)
        return 0;
    for (int j = 2; j <= sqrt(x); j++)
    {
        if (x % j == 0)
            return 0;
    }
    return 1;
}
int main()
{
    system("color 5");
    int n, j;
    printf("Nhap N =");
    scanf("%d", &n);
    printf("cac SNT nho hon %d la :", n);
    for (int i = 2; i <= n; i++)
    {
        if(KTSNT(i))
        {
            printf("\t%d", i);
        }
    }
    return 0;
}