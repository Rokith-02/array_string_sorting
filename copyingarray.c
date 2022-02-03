#include<stdio.h>
int b[5],i;
int fun(int a[])
{
        printf("printinf in function\n");
        for(i=0;i<5;i++)
        {
                printf("%d ",a[i]);
        }
        printf("\n");
        for(i=0;i<5;i++)
        b[i]=a[i];
        printf("printing after copy\n");
        for(i=0;i<5;i++)
        printf("%d ",b[i]);
}
int main()
{
        int a[5];
        printf("enter 5 elements\n");
       for(i=0;i<5;i++)
       {
               scanf("%d",&a[i]);
       }
       printf("printig array element\n");
       for(i=0;i<5;i++)
       {
               printf("%d ",a[i]);
       }
       printf("\n");
        fun(a);
        printf("\n");
}
