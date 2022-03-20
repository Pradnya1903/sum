#include<stdio.h>
#include<conio.h>
int sumofdigits(int sum);
main()
{
int num,sum;
printf("enter any number to find sum of digits:");
scanf("%d",&num);
sum=sumofdigits(num);
printf("sum of digits of %d=%d",num,sum);
getch();
}
int sumofdigits(int num)
{
if(num==0)
getch();
return ((num % 10) + sumofdigits(num/10));
}
