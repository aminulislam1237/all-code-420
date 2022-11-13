#include<stdio.h>
int main()
{
    int a,b,c,i,j;
    printf("enter the first number:");
    scanf("%d",&a);
    printf("enter the last number:");
    scanf("%d",&b);
    for(i=a;i<=b;i++){
        c = 0;
    for(j=2;j<i;j++){
        if(i%j==0){
            c = 1;
            break;
        }
    }

    if(c == 0){
        printf("%d ",i);
    }
}

getch();
}
