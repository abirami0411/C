#include<stdio.h>
int main()
{
    int l,u,i;
    printf("Enter the lower and upper values \n");
    scanf("%d%d",&l,&u);
    for(i=l;i<=u;i++)
    {
     if(i%11==0)
     {
         printf("%d ",i);
     }
    }
}
