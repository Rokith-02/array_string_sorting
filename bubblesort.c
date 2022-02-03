#include<stdio.h>
int main()
{
        int a[]={5,4,3,2,1},i,n,j,temp;
        n=sizeof a/sizeof a[0];
        printf("before swap\n");
        for(i=0;i<n;i++)
        {
        printf("%d ",a[i]);
        }
        printf("\nafter swap\n");
        for(i=0;i<n-1;i++)
        {
        for(j=0;j<n-1-i;j++)
        {
                if(a[j]>a[j+1])
                {
                        temp=a[j];
                        a[j]=a[j+1];
                        a[j+1]=temp;
                }
        }
        }
        for(i=0;i<n;i++)
        {
        printf("%d ",a[i]);
        }
        printf("\n");
}
