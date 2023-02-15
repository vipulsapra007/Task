#include<stdio.h>
#include<string.h>
void main()
{
    char a[20];
    char b[20];

    printf("enter string 1=");
    gets(a);

   strlen(a);
   printf("%d",strlen(a));

   strcpy(b,a);
   printf("\n");
   puts(b);

   char c[20];
   printf("enter string 2=");
   gets(c);
   puts(c);

   if(strcmp(a,c)==0)
   {
    printf("\nsame string");
   }
   else{
    printf("\nits not same");
   }
}