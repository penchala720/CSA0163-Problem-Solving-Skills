#include<stdio.h>
#include<conio.h>
int main()
{
int num,r,s=0;
printf("\nenter a number:");
scanf("%d",&num);
while(num!=0)
{
r=num%10;
s=s+r;
num=num/10;
}
printf("sum of digits of number is %d",s);
return 0;
}
