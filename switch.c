#include<stdio.h>
int main()
{
    char a;
    int x,y;
    printf("Chose this option + - * /");
    scanf("%c",&a);
    printf("Enter the Two Number:");
    scanf("%d%d",&x,&y);
    switch(a)
    {
case '+':
    printf("%d+%d=%d",x,y,x+y);
    break;
case '-':
    printf("%d-%d=%d",x,y,x-y);
    break;
case '*':
    printf("%d*%d=%d",x,y,x*y);
    break;
case '/':
    printf("%d+%d=%d",x,y,x+y);
    break;
}
getch();
}
