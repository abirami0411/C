#include<stdio.h>
int main()
{
    int r,c,i,j;
    printf("Enter the values of r and c ");
    scanf("%d%d",&r,&c);
    int a[r][c];
    printf("Enter the matrix elements ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    i=0;
    for(j=i;j<r;j++)
    {
        printf("%d",a[i][j]);
    }

i=r-1;
for(i=1;i<r;i=i+1)
{
    j=c-1;
    printf("%d",a[i][j]);
}
i=2;
for(j=c-2;j>=0;j--)
{

    printf("%d",a[i][j]);
}
i=1;
for(j=0;j<=c-2;j++)
{
    printf("%d",a[i][j]);
}return 0;
}
