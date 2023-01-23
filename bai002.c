// Bài 2: Tính S(n) = 1^2 + 2^2 + … + n^2
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    int n, i = 1, sum = 0;
    printf("nhap vao n :");
    scanf("%d", &n);
    while (i <= n)
    {
        sum += pow(i, 2);
        i++;
    }
    printf("S(n) = %d ", sum);
    getch();
    return 0;
}