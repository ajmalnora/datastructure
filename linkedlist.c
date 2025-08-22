#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node *head=NULL,*temp;

void insertbeg(int num){
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=num;
    newnode->next=NULL;
    if(head==NULL){
        head=newnode;}
    else{
    newnode->next=head;
    head=newnode;
    }

}
void insertend(int num){
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=num;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
    }
    else{
        temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
            
        }
        temp->next=newnode;
        newnode->next=NULL;


    }
}
void insertpos( int num)
{
    int i=1 ,pos;
    printf("enter the position to be inserted");
    scanf("%d",&pos);
    struct node *newnode,*current;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=num;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
    }
    else{
        temp=head;
        while(i<pos)
        {
            current=temp;
            temp=temp->next;
        }
        newnode->next=temp;
        current->next=newnode;
    }
}
void deletebeg(int num)
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=num;
    newnode->next=NULL;
    if(head==NULL)
    {
        printf("LIST EMPTY");
    }
    else
    {
        temp=head;
        head=head->next;
        free(temp);
    }

}
void deleteend(int num)
{
    struct node *newnode;
}
int main()
{
    int c, ch, x, xdel, cdel, end=1;
    while (end)
    {

        printf("1.insertion");
        printf("2.deletion");
        printf("3.display");
        printf("4.exit");
        printf("enter your choice");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
            printf("enter the elemnt to be inserted");
            scanf("%d", &x);
            printf("where to be inserted");
            printf("1.insertion at begining");
            printf("2. insertion at position");
            printf("3.insertion at end");
            scanf("%d", &c);
            if (c == 1)
            {
                insertbeg(x);
            }
            else if (c == 2)
            {

                insertpos(x);
            }
            else if(c==3)
            {
                insertend(x);
            }
            else
            {
                printf("invalid choice");
            }
            case 2:
            printf("enter the elemnt to be deleted\n");
            scanf("%d", &xdel);
            printf("where to be inserted");
            printf("1.deletion at begining");
            printf("2. deletion at position");
            printf("3.deletion at end");
            scanf("%d", &cdel);
             if (cdel == 1)
            {
                deletebeg();
            }
            else if (cdel == 2)
            {

                deletepos();
            }
            else if(cdel==3)
            {
                deleteend();
            }
            else
            {
                printf("invalid choice");
            }

            case 3:
            printf("elemens in list are: \n");
            display();

            case 4:
            printf("Exiting\n");
            end=0;
        }
    }
}