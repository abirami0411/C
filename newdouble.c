#include<stdio.h>
#include<stdlib.h>
void create();
void display();
void insertend();
void specificinsert();
struct node
{
    int data;
    struct node*next;
    struct node*prev;
}*temp,*head,*newnode;
int main()
{
    while(1)
    {
        int ch;
        printf("\n");
        printf("enter the ch\n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        case 3:
            insertend();
            break;
        case 4:
            specificinsert();
            break;
        }
    }
}
void create()
{

    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the data");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    newnode->prev=NULL;
    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
        temp=head;
        while(temp->next!=0)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->prev=temp;
    }

}



void display()
{
    temp=head;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;

    }
}
void insertend()
{
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    newnode=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    newnode->prev=temp;
    temp->next=newnode;

}
void specificinsert()
{
    int l;
    printf("enter the location");
    scanf("%d",&l);
    temp=head;
    for(int i=0; i<l-1; i++)
    {
        temp=temp->next;
    }
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the data");
    scanf("%d",&newnode->data);
    newnode->prev=temp;
    newnode->next=temp->next;
    temp->next=newnode;
    newnode->next->prev=newnode;
}
