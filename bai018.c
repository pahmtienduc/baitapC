// Bài 18: Tính S(n) = 1 + x^2/2! + x^4/4! + … + x^2n/(2n)!
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main ()
{
    int x,n,t;
    int i=1, k=1, s=1;
    float tong =1;
    do 
    {
        printf ("nhap vao so n :");
        scanf ("%d",&n);
        if(n==0)
        {
            printf ("nhap lai n va x (n>0). Vui long nhâp lai ");
        }
    }while(n==0);
    printf("\nnhap vao so x:");
    scanf("%d",&x);
    while (i<=n)
    {
        t = pow(x,(2*i));
        s = 2*i;
        k = k*s*(s-1);
        tong = tong + ((float)t/k);
        i++;
       
    }
    printf ("tong =%f", tong);
    getch ();
    return 0;
}