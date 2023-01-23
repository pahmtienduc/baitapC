// Bài 20: Liệt kê tất cả các “ước số” của số nguyên dương n
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    // khai báo biến
    int n;
    int i = 1;
    // nhập dữ liệu
    do
    {
        printf("\nnhap vao so n:");
        scanf("%d", &n);
        if (n <= 0)
        {
            printf("nhap lai so n(n>0)!");
        }
    } while (n <= 0);
    // xử lí và in kết quả
    printf("uoc so cua %d la :", n);
    while (i <= n)
    {
        if (n % i == 0)
        {
            printf("\t%d", i);
        }
        i++;
    }
    getch();
    return 0;
}