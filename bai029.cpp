// tham chiếu và tham trị
#include <stdio.h>
void swap_tham_tri(int a, int b)
{
    int tam = a;
    a = b;
    b = tam;
}
void swap_tham_chieu(int &a, int &b)
{
    int tam = a;
    a = b;
    b = tam;
}
int main ()
{
    int a,b;
    printf("nhap vao so a :");
    scanf("%d", &a);
    printf("nhap vao so b :");
    scanf("%d", &b);
    printf("\ngia tri ban dau la : a = %d va b = %d", a,b);
    swap_tham_tri(a,b);
    printf("\ngia tri - truyen tham tri la : a = %d va b = %d ",a,b);
    swap_tham_chieu(a,b);
    printf("\ngia tri - truyen tham chieu la : a = %d va b = %d ", a,b);
    return 0;
}