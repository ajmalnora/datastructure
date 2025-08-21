#include<stdio.h>
#define max 5
int arr[max], top=-1;

void push(){
    if(top>=max-1){
        printf("Stack overflow! \n");
    }
    else{
        int k, num;
        printf("Enter no. of elements to be pushed: ");
        scanf("%d",&k);
        int limit=top+k;
        if(k+top<max){
            for(int n=top+1;n<=limit;n++){
                scanf("%d",&num);
                arr[++top]=num;
                printf("%d has been inserted\n",num);
                
            }
        }
        else{
            printf("Not enough space\n");
        }
    }

}
void display(){
    if(top==-1){
        printf("Stack is empty\n");
    }
    else{
        for(int i=top;i>=0;i--){
            printf("%d \n",arr[i]);
        }
    }
}
void pop(){
    if(top==-1){
        printf("Stack is empty\n");
    }
    else{
        printf("Element poped is %d\n",arr[top]);
        top-=1;
    }

}

void main(){
    int End=1;
    int choice ;
    while(End){
    printf("Specify the operation you want to perform:\n");
    printf("1. Push\n");
    printf("2. Pop\n"); 
    printf("3. Display\n");
    printf("4.IsEmpty\n");
    printf("5. Top\n");
    printf("6. Exit\n");
    scanf("%d",&choice);

    switch(choice){
        case 1:
        
        push();
        break;

        case 2:
        pop();
        break;

        case 3:
        printf("Elements inside stack are: \n");
        display();
        break;
        
        case 4:
        if(top==-1)
        printf("Yes, Stack is Empty\n");
        else
        printf("No, Stack is not Empty\n");
        break;

        case 5:
        printf("Element at the top is: ");
        printf("%d\n",arr[top]);
        break;

        case 6:
        End=0;
        printf("End\n");
        break;

        default:
        printf("Wrong Choice\n");
        

    }
}
}