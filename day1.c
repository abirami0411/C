#include<stdio.h>
#include<stdlib.h>
void create();
void display();
void count();
void insertatfront();
void insertatend();
void insertatmid();
struct node
{
    int data;
    struct node*next;
}*head,*temp,*newnode;
int main()
{
    int option;
    while(1)
    {
        printf("1.create\n");
        printf("2.display\n");
        printf("3.count\n");
        printf("4.insertatfront\n");
        printf("5.insertatend\n");
        printf("6.insertatmid\n");
        printf("7.exit\n");
        scanf("%d",&option);
        switch(option)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        case 3:
            count();
            break;
        case 4:
            insertatfront();
            break;
        case 5:
            insertatend();
            break;
        case 6:
            insertatmid();
            break;
        default:
            break;
        }
    }
    return 0;
}
void create()
{
    int i,n;
    printf("Enter the size: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL)
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
void count()
{
    int count=0;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    printf("count is %d",count);

}
void insertatfront()

{




    newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter the element");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    temp=head;
    newnode->next=head;
    head=newnode;

}

void insertatend()

{
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter the elements");
    scanf("%d",&newnode->data);
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
}
void insertatmid()
{
    int pos;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter the elements");
    scanf("%d",&newnode->data);
    printf("enter the position");
    scanf("%d",&pos);
    for(int j=1; j<pos; j++)
    {
        temp=temp->next;
        newnode->next=temp->next;
        temp->next=newnode;
    }
}
