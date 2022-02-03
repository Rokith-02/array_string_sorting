#include<stdio.h>
void delete(int*p,int pos,int i)
{
        int j,n=5;
        for(i=0;i<n;i++)
        {
                if(pos==i){
                for(j=i;j<5;j++)
                p[j]=p[j+1];
                n--;}
        }
        printf("printing after deleting\n");
        for(i=0;i<n;i++)
        printf("%d",p[i]);

}
int main()
{
        int a[5],i,pos;
        printf("enter the array element\n");
        for(i=0;i<5;i++)
        scanf("%d",&a[i]);
        printf("enter the postion\n");
        scanf("%d",&pos);
        delete(a,pos,i);
        printf("\n");
}
