#include<stdio.h>
#define max 3
int que[max],rear=-1,front=-1,num;

void enqueue(){
    if(rear>=max-1){
    printf("Queue full\n");}
    else{
        printf("Enter element to be added: ");
        scanf("%d",&num);
    
        if(rear==-1 && front==-1){
        rear+=1;
        front+=1;
        que[rear]= num;
        printf("%d inserted\n",num);
        }
        else{
        rear+=1;
        que[rear]=num;
        printf("%d inserted\n",num);
        }
    }
}
void display(){
if(rear==-1&&front==-1){
    printf("Queue is empty\n");}
else{
    for(int i=front;i<=rear;i++)
    printf("%d  ",que[i]);

    }
    printf("\n");
}

void dequeue(){
    if(rear==-1&&front==-1){
        printf("Queue is empty\n");
    }
    else{
      printf("Element removed is : %d",que[front]);
      front+=1;

    }

}

void main(){
    int End=1;
    int choice ;
    while(End){
    printf("Specify the operation you want to perform:\n");
    printf("1. Enqueue\n");
    printf("2. Dequeue\n"); 
    printf("3. Display\n");
    printf("4.IsEmpty\n");
    printf("5. Exit\n");
    scanf("%d",&choice);

    switch(choice){
        case 1:
        
        enqueue();
        break;

        case 2:
        dequeue();
        break;

        case 3:
        printf("Elements inside queue are: \n");
        display();
        break;
        
        case 4:
        if(rear==-1&&front==-1)
        printf("Yes, Queue is Empty\n");
        else
        printf("No, Queue is not Empty\n");
        break;

        case 5:
        End=0;
        printf("End\n");
        break;

        default:
        printf("Wrong Choice\n");
        

    }
}
}