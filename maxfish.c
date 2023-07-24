#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[4][4]={{1,0,0,1},{0,0,0,1},{1,0,0,3},{4,0,0,1}};
    int sum=0,b[4];
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            sum=sum+a[i][j];
        }
        b[i]=sum;
        sum=0;
    }
    int max=b[0];
   for(int i=1;i<4;i++)
    {
        if(max<b[i])
        {
            max=b[i];
        }
    }
    printf("%d",max);
}
