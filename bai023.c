// Bài 23: Đếm số lượng “ước số” của số nguyên dương n
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    // khai báo biến 
    int n, i = 1, dem = 0;
    // nhập dữ liệu
    do
    {
        printf("\nnhap vao so N :");
        scanf("%d", &n);
        if (n <= 0)
        {
            printf("nhap lai n(n>0)");
        }
    } while (n <= 0);
    // xử lí 
    printf("cac uoc cua %d la : ", n);
    while (i <= n)
    {
        if (n % i == 0)
        {
            printf("\t%d", i);
            dem++;
        }
        i++;
    }
    // in kết quả
    printf("\nso luong cac uoc cua %d la : %d",n , dem);
    getch();
    return 0;
}