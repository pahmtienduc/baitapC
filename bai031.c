// viết hàm đệ quy tính số fibonicca
#include <stdio.h>
#include <stdlib.h>
int fibonaci(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else 
    {
        return fibonaci(n-1)+fibonaci(n-2);
    }
}
int main ()
{
    system("color 2");
    int n;
    do 
    {
        printf("nhap n (n>=0) :");
        scanf("%d", &n);
    }while(n<0);
    printf("So Fibonaci(%d) = %d ", n, fibonaci(n));
    return 0;
}