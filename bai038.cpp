// sắp xếp mảng tăng dần hoặc giảm dần
#include <stdio.h>
void enterArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" Enter a[%d] : ", i);
        scanf("%d", &a[i]);
    }
}
void swapLocation(int &a, int &b)
{
    int temporary = a;
    a = b;
    b = temporary;
}
void arrayIncrease(int a[], int n)
{
    // int location;
    // int temporary;
    for (int i = 0; i < n; i++)
    {
        int locationMax = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[locationMax])
            {
                locationMax = j;
            }
        }
        swapLocation(a[i], a[locationMax]);
    }
}
void arrayDecrease(int a[], int n)
{
    // int location;
    // int temporary;
    for (int i = 0; i < n; i++)
    {
        int locationMin = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] > a[locationMin])
            {
                locationMin = j;
            }
        }
        swapLocation(a[i], a[locationMin]);
    }
}
void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\t%d", a[i]);
    }
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
    printf("Array Increase : ");
    arrayIncrease(a, n);
    printArray(a, n);
    printf("\nArray Decrease : ");
    arrayDecrease(a, n);
    printArray(a, n);
    return 0;
}