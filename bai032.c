#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
void loading ()
{
    int c=4;
    printf("\n\t\t\t\t\tLoading....\n\n");
    printf("\t\t\t\t");
    for(int i=0; i<26; i++)
    {
        system("color 4");
        printf("%c", c);
        Sleep(100);
    }
    printf("\nLoad Xong Roi Ne %c", c);
}
int main ()
{
    loading();
    return 0;
}