// đảo ngược mảng 
#include <stdio.h>
void enterArray(int x[], int n)
{
    for(int i=0; i<n; i++)
    {
        printf(" Enter a[%d] : ", i);
        scanf("%d", &x[i]);
    }
}
void printArray(int x[], int n)
{
    printf("Value Array : ");
    for(int i=0; i<n; i++)
    {
        printf("\t%d", x[i]);
    }
}
void reverseArray(int x[], int n)
{
    //int location=x[i];
    for(int i=0; i<=n/2; i++)
    {
        int temporary=x[i];
        x[i]=x[n-i-1];
        x[n-i-1]=temporary;
    }
}
int main ()
{
    int n, a[100];
    do 
    {
        printf("Enter Element n(0<n<=100) : ");
        scanf("%d", &n);
    }while(n<0 || n>100);
    enterArray(a,n);
    printArray(a,n);
    reverseArray(a,n);
    printf("\n");
    printArray(a,n);
    return 0;
}