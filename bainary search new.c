#include<stdio.h>
int main(){
    int a[]={4,5,8,12,36,45,65};
    int p=65;
    int middle,right,left;
    right=7;
    left =0;
    while(left<=right){
        middle=(right+left)/2;
        if(a[middle]==p){
            printf("item found %d index\n",middle);
        return middle;
        }
        else if(a[middle]<p){
            left=middle+1;
        }
        else {
            right=middle-1;
        }
    }
    printf("not found in this index\n");

}
