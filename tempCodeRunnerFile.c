#include <stdio.h>
void main()
{

   int a[2][3];
   int  b[2][3];
    int c[2][3];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("\nenter a=");
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("\nenter a=");
            scanf("%d", &b[i][j]);
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            c[i][j] = a[i] + b[j];
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d", c[i][j]);
            printf("\n");
        }
    }
}