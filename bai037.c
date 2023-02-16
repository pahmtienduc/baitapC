// tìm max min trong mảng
#include <stdio.h>
void enterArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" Enter a[%d] : ", i);
        scanf("%d", &a[i]);
    }
}
int Max(int a[], int n)
{
    int max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    return max;
}
int Min(int a[], int n)
{
    int min = a[0];
    for (int i = 1; i < n; i++)
    {
        if (min > a[i])
        {
            min = a[i];
        }
    }
    return min;
}
int main()
{
    int n, a[100];
    do
    {
        printf("Enter Element n(0<n<=100) : ");
        scanf("%d", &n);
    } while (n <= 0 || n > 100);
    enterArray(a, n);
    printf("Max = %d", Max(a, n));
    printf("\nMin = %d", Min(a, n));
    return 0;
}