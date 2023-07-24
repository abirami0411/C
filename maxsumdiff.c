#include<stdio.h>
#include<stdlib.h>
int maxdiff(int a[], int n);
int main()
{
    printf("Enter size");
    int n;
    scanf("%d\n",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("%d",maxdiff(a,n));
}
int maxdiff(int a[], int n)
{
    int sub1=0,sub2=0;
    for(int i=0;i<n;i++)
    {
        int occurence=1;
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                occurence=0;
                a[i]=a[j]=0;
                break;
            }
        }
        if(occurence==1)
        {
            if(a[i]>0)
            {
                sub1+=a[i];
            }
            else
            {
                sub2+=a[i];
            }
        }
    }
    return sub1-sub2;
}
