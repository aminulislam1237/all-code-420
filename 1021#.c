#include<stdio.h>
int main()
{
    float a,c,d,e,f;
    int b;
    scanf("%f",&a);
   printf("%0.0f nota(s) de R$ 100.00\n",a/100);
    b = a % 100;
    printf("%d nota(s) de R$ 100.00\n",b/50);
    return 0;
}
