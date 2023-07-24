#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
struct node *prev;
}*newnode,*head,*temp;
void create();
void display();
void main()
{
    create();
    display();
}
void create()
{
int i,n;
printf("enter the size");
scanf("%d",&n);
for(i=0;i<n;i++)
{
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter the elements");
scanf("%d",&newnode->data);
newnode->next=NULL;
newnode->prev=NULL;
if(head==NULL)
{
head=newnode;
temp=newnode;
}
else
{
newnode->next=head;
head->prev=newnode;
head=newnode;
}
}
}
void display()
{


temp=head;
while(temp!=NULL)
{
    printf("%d ",temp->data);
    temp=temp->next;
}
}

