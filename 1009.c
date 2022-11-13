#include<stdio.h>
int main()
{
    char n;
    double a,b,c;
    scanf("%s%lf%lf",&n,&a,&b);
    c=a+b*.15;
    printf("TOTAL = R$ %.2lf\n",c);
    return 0;
}
