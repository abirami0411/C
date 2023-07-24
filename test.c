#include<stdio.h>
#include<stdlib.h>
int create(int a[],int n);
void display();
struct node
{
    int data;

    struct node *next;
    struct node *prev;
    struct node *child;
}*newnode,*head,*head1,*head2,*head3,*temp,*tail;

int main()
{
    int a1[]={1,2,3,4,5,6};
    int a2[]={7,8,9,10};
    int a3[]={11,12};
    int n1=sizeof(a1)/sizeof(a1[0]);
    int n2=sizeof(a2)/sizeof(a2[0]);
    int n3=sizeof(a3)/sizeof(a3[0]);
    struct node *head1=create(a1,n1);
    struct node *head2=create(a2,n2);
    struct node *head3=create(a3,n3);
    head1->next->next->child=head2;
    head2->next->child=head3;
    display(head3);

}
struct node *create(int a[],int n)
{ int i;
  for( i=0;i<n;i++)
   {
    newnode=(struct node*)malloc(sizeof(struct node));
   newnode->data=a[i];
   newnode->next=0;
   newnode->prev=0;
if(tail==0&&head==0)
{

    head=tail=newnode;
    temp=newnode;
}
else
{

    temp->next=newnode;
    newnode->prev=temp;
    tail=newnode;
    tem=newnode;
}

}
    return head;
}


void display(struct node *head)
{
    temp=head;
    while(temp->next!=0)
    {
        printf("%d\n",temp->data);
        temp=temp->next;

    }
    printf("%d\n",tail->data);

}

struct node *flatternlist(struct node *head)
{
    if(head==0)
    {
        return;
    }
    struct node *tail=head,*curr=head;
    while(curr)
    {
        struct node *tail_child=flatternlist(child);
        tail_child->next=nextnode;
        if(nextnode)
        {
            nextnode->prev=tail_child;
        }
        curr->next=child;
        child->prev=curr;
        curr->child=0;
        else
        {
            curr=curr->next;
                if (curr)
                tail = curr;
        }
    }
    return tail;
};

void printlist(struct node *head)
{
    while(head!=0)
    {
        printf("%d ",head->data);
        head=head->next;
    }
    printf("\n");
}
