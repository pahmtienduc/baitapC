// trộn mảng 1 chiều và sắp xếp tăng dần
#include <stdio.h>
int n, a[100], b[100], c[200];

void enterArray(int x[], int &n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" Enter Element [%d] : ", i);
        scanf("%d", &x[i]);
    }
}
void printArray(int x[], int n)
{
    printf("Values Array : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", x[i]);
    }
}
void sortArrayascending(int x[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int temporary;
            if (x[i] > x[j])
            {
                temporary = x[i];
                x[i] = x[j];
                x[j] = temporary;
            }
        }
    }
}
void mixArray(int x1[], int n_x1, int x2[], int n_x2, int x3[], int &n_x3)
{
    int i1 = 0, i2 = 0, i3 = 0;
    n_x3 = n_x1 + n_x2;
    while (i3 < n_x3)
    {
        if (i1 >= n_x1)
        {
            x3[i3] = x2[i2];
            i2++;
        }
        else if (i2 >= n_x2)
        {
            x3[i3] = x1[i1];
            i1++;
        }
        else if (x1[i1] < x2[i2])
        {
            x3[i3] = x1[i1];
            i1++;
        }
        else
        {
            x3[i3] = x2[i2];
            i2++;
        }
        i3++;
    }
}
int main()
{
    do
    {
        printf("Enter Element Array A (0<n<=100) : ");
        scanf("%d", &n);
    } while (n <= 0 || n > 100);
    enterArray(a, n);
    printArray(a, n);
    printf("\n");
    sortArrayascending(a, n);
    printArray(a, n);
    printf("\n");
    do
    {
        printf("Enter Element Array B (0<n<=100) : ");
        scanf("%d", &n);
    } while (n <= 0 || n > 100);
    enterArray(b, n);
    printArray(b, n);
    printf("\n");
    sortArrayascending(b, n);
    printArray(b, n);
    printf("\n");
    mixArray(a, n, b, n, c, n);
    printArray(c, n);
    return 0;
}