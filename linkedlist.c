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
    printf("Enter the position to be inserted: ");
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
            i++;
        }
        newnode->next=temp;
        current->next=newnode;
    }
}
void deletebeg()
{
    struct node *newnode;
   
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
void deleteend()
{
    struct node *current;
   
   
    if(head==NULL)
    {
        printf("list empty");
    }
    else{
        temp=head;
        while(temp->next!=NULL)
        {
            current=temp;
            temp=temp->next;
        }
        current->next=NULL;
        free(temp);
        
    }

}
void deletepos()
{
    struct node *current;
    int i=1, pos;
    printf("Enter position to delete:\n");
    scanf("%d",&pos);
   
    if(head==NULL)
    {
        printf("list empty");
    }
    else{
        temp=head;
        while(i<pos)
        {
            current=temp;
            temp=temp->next;
            i++;
        }
        current->next=temp->next;
        free(temp);
        
    }
}
void display(){
    if(head==NULL)
    printf("List is empty\n");
    else{
    temp=head;
    while(temp!=NULL){
    printf("%d \n",temp->data);
    temp=temp->next;
    }
    }
}
int main()
{
    int c, ch, x, cdel, end=1;
    while (end)
    {

        printf("1.Insertion\n");
        printf("2.Deletion\n");
        printf("3.Display\n");
        printf("4.Exit\n");
        printf("Enter your choice\n");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
            printf("Enter the elemnt to be inserted\n");
            scanf("%d", &x);
            printf("Where to be inserted\n");
            printf("1.Insertion at begining\n");
            printf("2.Insertion at position\n");
            printf("3.Insertion at end\n");
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
                printf("Invalid choice\n");
            }
            break;
            case 2:
            if(head==NULL){
                printf("List Empty\n");
            }
            else{
            printf("1.Deletion at begining\n");
            printf("2. Deletion at position\n");
            printf("3.Deletion at end\n");
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
                printf("Invalid choice\n");
            }
        }
            break;

            case 3:
            printf("Elements in list are: \n");
            display();
            break;

            case 4:
            printf("Exiting\n");
            end=0;
            break;

            default:
            printf("Invalid input\n");
            break;
        }
    }
}