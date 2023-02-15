#include<stdio.h>
void main()
{
    int a,b,n;
printf("presss 1 for sum\n");
printf("presss 2 for substraction\n");
printf("presss 3 for multiplication\n");
scanf("%d",&n);

    printf("enter a=");
    scanf("%d",&a);
      printf("enter b=");
    scanf("%d",&b);




switch(n)
{
    case 1:
    printf("a+b=%d",a+b);
    break;
    case 2:
    printf("a-b=%d",a-b);
    break;
    case 3:
    printf("a*b=%d",a*b);
    break;
}



    


}