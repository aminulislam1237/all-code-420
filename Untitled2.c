#include<stdio.h>
int main()
{
       int number1;
       double number2,amount1,SALARY;
  scanf("%d%lf%lf",& number1,&number2,&amount1);
  printf("NUMBER =%d\n", number1);
  SALARY = number2 * amount1;
  printf("SALARY = U$ %.2lf\n",SALARY);
      getch();
}
