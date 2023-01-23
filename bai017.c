// Bài 17: Tính S(n) = x + x^2/2! + x^3/3! + … + x^n/N!
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main ()
{
    int n,x, s=0,i=1;
    float tong =0;
    printf ("nhap vao so n :");
    scanf ("%d", &n);
    printf ("nhap vao so x :");
    scanf ("%d",&x);
    while (i<=n)
    {
        s+=i;

        tong += ((float)pow(x,i)/s);
        i++;
    }
    printf ("tong=%f",tong);
    getch ();
    return 0;
}