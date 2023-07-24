#include <stdio.h>
void main()
{
    int i,j,n;
    printf("enter the size");
    scanf("%d",&n);
    char *arr;
    arr = (char*)malloc(n*sizeof(char));
    printf("Enter the string: ");
    for(i=0; i < n; i++)
    {
        scanf(" %c",arr+i);
    }
    for(i=0; i < n; i++)
    {
        printf("%c",arr[i]);
    }
    for(i=0; i<=n; i++)
    {
        for(j=i+1; j<=n; j++)
        {
            if(arr[i]==arr[j])
            {
                printf("\n");
                printf(arr[j]);
            }
        }
    }

}
