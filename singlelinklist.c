#include<stdio.h>
#include<stdlib.h>
void insertatbegin();
void display();
void insertlast();
struct node
{
    int data;
    struct node* next;
}*newnode,*temp,*prev,*cur,*head;
int main()

    int ch;
    printf("enter the choice");
    scanf("%d",&ch);
    while(1)
    {
        if(ch==1)
        {
            insertAtbegin();
        }
        else if(ch==2)
        {
            display();
        }

    }

}
void insertAtbegin()
{
    int n,i;
    printf("enter the n value");
    scanf("%d",&n);
    for(i=0; i<=n; i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter the elements");
        scanf("%d",newnode->data);
        newnode->next=NULL;
        if(head==NULL)
        {
            head=newnode;
            temp=newnode;
        }
        else
        {
            temp=head;
            while(temp->next!=NULL)
            {
                temp->next=newnode;
                temp=temp->next;
            }
        }
    }
}
void display()
{
    temp=head;
    while(temp->next!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
    printf("%d",temp->data);
}
void insertlast()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("empty list");
        return ;
    }
    else
    {
        new->value=element;
        new->next=NULL;
        temp=head;
        while(temp->next!=NULL)
            temp=temp->next;
        temp->next=newnode;
    }
}


