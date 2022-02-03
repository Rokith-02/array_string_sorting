#include<stdio.h>
int main()
{
        int a[6]={6,5,4,3,2,1};
        int temp,i,j,n;
        n=sizeof a/sizeof a[0];
        printf("count:%d\n",n);
        printf("selection sorting\n");
        for(i=0;i<n;i++)
        {
                for(j=i+1;j<n;j++)
                {
                        if(a[i]>a[j])
                        {
                                temp=a[i];
                                a[i]=a[j];
                                a[j]=temp;
                        }
                }
        }
        for(i=0;i<n;i++)
        {
                printf("%d",a[i]);
        }
}
