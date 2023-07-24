#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
}*Node,*head,*temp,*curr;


void display (struct Node *node)
{


    while (node != NULL)
    {
        printf ("%d ", node->data);
        node = node->next;
    }
    printf ("\n");
}


void delete_Alt (struct Node *head)
{
    temp=head;

    if (head == NULL)
        return;


    struct Node *prev = temp;
    struct Node *curr = temp->next;

    while (prev != NULL && curr != NULL)
    {

        prev->next = curr->next;
        free (curr);
        prev = prev->next;
        if (prev != NULL)
            curr = prev->next;
    }
}

int main()
{
    {
        int i,n;
        printf("Enter the size: ");
        scanf("%d",&n);
        for(i=0; i<n; i++)
        {
            Node=(struct Node *)malloc(sizeof(struct Node));
            printf("Enter data: ");
            scanf("%d",&Node->data);
            Node->next=NULL;
            if(head==NULL)
            {
                head=Node;
                temp=Node;
            }
            else
            {
                temp->next=Node;
                temp=Node;
            }
        }
    }

    printf ("Before deletion: ");
    display (head);
    delete_Alt (head);
    printf ("After deletion: ");
    display (head);
    return 0;
}
