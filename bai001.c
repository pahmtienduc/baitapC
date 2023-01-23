// Bài 1: Tính S(n) = 1 + 2 + 3 + … + n
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    int n, i = 1, tong = 0;
    printf("nhap vao n :");
    scanf("%d", &n);
    while (i <= n)
    {
        tong += i;
        i++;
    }
    printf("tong la : %d", tong);
    getch();
    return 0;
}