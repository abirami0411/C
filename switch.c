#include<stdio.h>
#include<stdlib.h>
void create();
void display();
void count();
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
        printf("4.exit\n");
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
            printf("%d",temp->data);
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



