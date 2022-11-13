#include<stdio.h>
int main()
{
    printf("Enter the number of array:");
    int n;
    scanf("%d",&n);
    int array[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }
    for (int i=0; i<n-1; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            if (array[i] > array[j])
            {
                int   t = array[i];
                array[i] = array[j];
                array[j] = t;
            }
        }
    }
    int i;
    for ( i=0; i<n; i++){
        printf("%d\t", array[i]);}// 2 3 4 5 6
        printf("enter the search number:");
        int m;
        scanf("%d",&m);
     int mid,h,l;
    while(l<h)
    {
        mid=(0+(n-1))/2;
        if(m==array[mid])
        { break;
        }
        else if(m<array[mid])
        {
            h=mid-1;
        }
        else
        {
            l=mid+1;
        }
        if (l>h){
            printf("%d is the number of array \n",m);
        }
        else
        printf("%d is not number is array\n",array[mid]);
    }
    return 0;
}
