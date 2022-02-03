#include<stdio.h>
void fun(int*p)
{
        int n=5,j,count,i;
        for(i=0;i<n;i++)
        {
                for(j=0;j<i;j++)
                {
                        if(p[i]==p[j])
                        break;
                }
        if(i==j)
        {
                for(j=j+1,count=1;j<n;j++)
                if(p[i]==p[j])
                count++;
        printf("%d is present:%d times\n",p[i],count);
        }
        }
}
int main()
{
        int a[5],i;
        printf("enter the element\n");
        for(i=0;i<5;i++)
        scanf("%d",&a[i]);
        fun(a);
}
