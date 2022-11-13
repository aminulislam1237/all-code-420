#include<stdio.h>

int main(){

    int i=1,j=1;

    while(i<=10){

       j=1;

        while(j<=10){

                if(i==10){
                    printf("%dX% d = %d  ",i,j,i*j);
                }
                else{
                    printf("%d X %d =  %d ",i,j,i*j);

                }

               j++;
        }

        printf("\n");

        i++;
    }

    return 0;
}
