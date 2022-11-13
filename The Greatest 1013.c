#include<stdio.h>
int main()
{
int num1,num2,num3;
scanf("%d%d%d",&num1,&num2,&num3);
if (num1>num2&&num1>num3)
printf ("eh o maior %d",num1);
else if(num2>num3&&num2>num1)
printf("eh o maior %d",num2);
else
printf("eh o maior %d",num3);
getch();
}
