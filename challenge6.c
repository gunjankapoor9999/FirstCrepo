#include<stdio.h>
#include<conio.h>
int main()
{
int n;
scanf("%d",&n);
switch(n>0)
{
case 1: printf("number is positive");
        break;
case 0:
        switch(n<0)
        {
        case 1: printf("number is negative");
                break;
        case 0: printf("number is 0");
                break;
        }
        break;
}
return 0;
}
