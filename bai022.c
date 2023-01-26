// Bài 22: Viết chương trình tìm số lớn nhất trong 3 số thực a, b, c
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    // khai báo biến
    int a, b, c;
    printf("nhap vao so a: ");
    scanf("%d", &a);
    printf("nhap vao so b : ");
    scanf("%d", &b);
    printf("nhap vao so c : ");
    scanf("%d", &c);
    // xử lí
    int max = a;
    if (a < b)
    {
        max = b;
        if (b < c)
        {
            max = c;
        }
    }
    // in kết quả
    printf("so lon nhat la : %d", max);
    getch();
    return 0;
}
