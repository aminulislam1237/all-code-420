#include<stdio.h>
int main()
{
 int i,j,k=1;
 printf("Enter any number:");
 scanf("%d",&i);
 for(j=1;j<=i;j++){
        k=k*j;
 }
 printf("%d\n",k);
 return 0;

}
