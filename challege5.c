#include<stdio.h>
#include<conio.h>
int main()
{
int n;
printf("enter a number");
scanf("%d",&n);
switch(n%2==0)
{
case 0: printf("number is odd");
        break;
case 1: printf("number is even");
}
return 0;
}
