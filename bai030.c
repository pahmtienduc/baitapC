// viết hàm đệ quy tính giai thừa
#include <stdio.h>
#include <stdlib.h>
int tinh_giai_thua(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    else 
    {
        return n*tinh_giai_thua(n-1);
    }
}
int main ()
{
    system("color 2");
    int n;
    do 
    {
        printf("nhap n (n>=0) : ");
        scanf("%d", &n);
    }while(n<0);
    printf("So %d! = %d", n, tinh_giai_thua(n));
    return 0;
}