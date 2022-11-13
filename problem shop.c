#include<stdio.h>
int main()
{
int x, y;
float z=0;
    scanf("%d%d",&x,&y);
    switch(x){
case 1:
   z=(float )4.00*y;
    break;
case 2:
    z=(float )4.50*y;
    break;
case 3:
    z=(float )5.00*y;
        break;
case 4:
    z=(float )2.00*y;
        break;
case 5:
        z=(float )1.50*y;
        break;
    }
   printf("Total: R$ %f",z);
    return 0;
}
