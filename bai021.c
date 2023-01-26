// Bài 24: Liệt kê tất cả các “ước số lẻ” của số nguyên dương n
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    // khai báo biến
    int n, i = 1;
    // nhập dữ liệu
    do
    {
        printf("nhap vao so N : ");
        scanf("%d", &n);
        if (n <= 0)
        {
            printf("nhap lai so n(n>0)!");
        }
    } while (n <= 0);
    // xử lí, in kết quả
    printf("cac uoc le cua %d la : ", n);
    while (i <= n)
    {
        if (n % i == 0)
        {
            if (i % 2 != 0)
            {
                printf("\t%d", i);
            }
        }
        i++;
    }
    getch();
    return 0;
}