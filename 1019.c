#include<stdio.h>
int main(){
int N,a,b,c;
scanf("%d",&N);
a=N/365;
b=(N-a*365)/30;
c=(N-a*365)-(b*30);
printf("%d:%d:%d",a,b,c);
return 0;
}
