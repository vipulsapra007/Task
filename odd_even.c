// find odd even using for loop
#include <stdio.h>
void main()
{
    int n;
    printf("enter number= ");
    scanf("%d", &n);
    printf("even numbers=");
    for (int i = 1; i < n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\t", i);
        }
    }
    printf("\nodd numbers=");
    for (int i = 1; i < n; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d\t", i);
        }
    }
}