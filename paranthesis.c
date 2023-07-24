#include<stdio.h>
#include<stdlib.h>
int main()
{
    printf("Enter the no. of test cases");
    int n;
    scanf("%d",&n);
    printf("Enter the no. of elements");
    int k;
    scanf("%d",&k);
    int a[k];
    printf("Enter elements");
    for(int i=0;i<k;i++)
    {
        scanf("%d",&a[i]);
    }
    int m;
    printf("Enter m");
    scanf("%d",&m);
    int sum=sum+a[0]+a[1];
    int add=0;
    int count=0;
    for(int i=0;i<k;i++)
    {
        add=add+a[i];
        if(add==sum)
        {
            count++;
            i++;
            break;
        }
        else
        {
            i++;
        }
    }
    printf("%d",count);
    if(count==m)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
