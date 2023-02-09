// chuyển đổi từ hệ thập phân sang hệ nhị phân
#include <stdio.h>
void printNhi_Phan(int x)
{
    
    if (x == 0)
    {
        return ;
    }
    else
    {
        int so_du = x % 2;
        printNhi_Phan(x / 2);
        printf("%d", so_du);
    }
}
int main()
{
    int n;
    do
    {
        printf("nhap n (n>0) :");
        scanf("%d", &n);
    } while (n < 0);
    printf("He nhi phan la :");
    printNhi_Phan(n);
    return 0;
}