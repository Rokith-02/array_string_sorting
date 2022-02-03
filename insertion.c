#include<stdio.h>
int main()
{
        int a[5],i,j,temp;
        printf("enter the number\n");
        for(i=0;i<5;i++)
        scanf("%d",&a[i]);
        for(i=1;i<5;i++)
        {
                temp=a[i];
                j=i-1;
                while(j>=0&&temp<=a[j])
                {
                        a[j+1]=a[j];
                        j=j-1;
                }
                a[j+1]=temp;
        }
        printf("\n");
        for(i=0;i<5;i++)
        printf("%d ",a[i]);
}
