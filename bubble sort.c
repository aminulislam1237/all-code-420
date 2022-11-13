#include<stdio.h>
int main(){
int a[]={15,1,5,2,10,8,6};
 int s=7,i,j,tep;
 for(i=0;i<s-1;i++){
    for(j=0;j<s-1-i;j++){
            if(a[j]>a[j+1]){
        tep=a[j];
        a[j]=a[j+1];
        a[j+1]=tep;
            }
    }
 }
for(i=0;i<s;i++){
printf("%d\t",a[i]);
}
printf("\n");
 }
