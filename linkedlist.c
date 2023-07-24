#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node*next;
}*temp,*head,*newnode;
int main()
{
    int n,i,j;
    printf("enter the size; ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        newnode=(struct node*)malloc (sizeof(struct node));
        printf("enter the element");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL)
        {
            head=newnode;
            temp=newnode;
        }
        else
        {
            temp=head;
            {
             while(temp->next!=NULL)
            {
            temp=temp->next;
            temp=newnode;
        }
        newnode->next=head;
        head=newnode;
    }
    temp=head;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
        //count++;
    }
    //printf("count is %d",count);
    return 0;
}
