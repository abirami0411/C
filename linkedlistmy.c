#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*temp,*head,*newnode;
int main()
{
    insert();
    display();
}
void insert()
{
    newnode=(struct node *)(malloc(sizeof(struct node)));
    printf("Enter the data\n");
    scanf("%d",newnode->node);
    newnode->next=0;
    if(head==0)
    {
        head=newnode;
        temp=newnode;
    }
    else
    {
        temp->next=newnode;
        temp=newnode;
    }
}
