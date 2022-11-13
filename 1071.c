#include<stdio.h>
int main()
{
    int i,a,b,sum=0,t;
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        t=a;
        a=b;
        b=t;
    }
for(i=a+1;i<b;i++ ){
        if (i%2!=0)
        sum+=i;
}
printf("%d",i);
    return 0;
}
