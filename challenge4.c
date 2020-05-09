#include<stdio.h>
#include<conio.h>
int main()
{
int a,b;
printf("enter two numbers");
scanf("%d%d",&a,&b);
switch(a>b)
{
case 0:
            printf("b is max");
            break;
case 1:
         printf("a is max");
}
return 0;
}
