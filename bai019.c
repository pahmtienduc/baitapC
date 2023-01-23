// Bài 19: Tính S(n) = 1 + x + x^3/3! + x^5/5! + … + x^(2n+1)/(2n+1)!
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    // khai báo biến
    int x, n, s;
    int i = 0, k = 1;
    float t,tong = 1;
    // nhập dữ liệu
    do
    {
        printf("\nnhap vao so n : ");
        scanf("%d", &n);
        if (n <= 0)
        {
            printf("nhap lai so n(n>0)!");
        }
    } while (n <= 0);
    printf("nhap vao so x :");
    scanf("%d", &x);
    // xử lí
    while (i <= n)
    {
        t = pow(x, (2 * i + 1));
        s = 2 * i + 1;
        k = k * s * (s - i);
        tong = tong  + t / k;
        i++;
    }
    // in kết quả
    printf("tong = %f", tong);
    getch();
    return 0;
}