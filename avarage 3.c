#include<stdio.h>
int main()
{
    float n1,n2,n3,n4,n5;
    double x,x2;
    scanf("%f%f%f%f",&n1,&n2,&n3,&n4);
    x=((n1*2)+(n2*3)+(n3*4)+n4)/10;
    printf("Media:%.1lf\n",x);
    if (x<5.0){
        printf("Aluno reprovado.\n");
    }
    else if(x>=7.0){
        printf("Aluno aprovado.\n");
    }
    else {
        printf("Aluno em exame.\n");
        printf("Nota do exame:");
        scanf("%f",&n5);
        x2=(x+n5)/2;
        if (x2>=5.0){
        printf("Aluno aprovado.\n");
        }
        else{
        printf("Aluno reprovado.\n");}
         printf("Media final: %.1lf\n",x2);
    }
    return 0;
}
