#include <stdio.h>

int main() {

    int i,j,x,y,z;
 scanf("%d",&x);
if(x%2==0)
    x=x+1;
else
    x=x+2;
for(i=1,j=x;i<=6;i++,j=j+2){
    printf("%d\n",j);
}


    return 0;
}
