#include <stdio.h>
#define max 5
int arr[max], top=-1, n,i,num,x=0;
void push() {

    if(top>=max-1)
        {
            printf("Stack overflow");
        }
    else{
        printf("Enter number of elements to push  ");
        scanf("%d",&n);
        x+=n;
        if (x>max){
            printf("Greater than stack size");
            x-=n;
        }

        else{
            for(i=0;i<=n-1;i++){
                printf("Enter an element  ");
                scanf("%d",&num);
                top++;
                arr[top]=num;
                printf("%d is added to the stack \n",num);
            }
        }
    }

}

void display(){
    if(top==-1){
        printf("Empty stack");
    }
    else{
        printf("Stack elements\n");
        for(i=0;i<=top;i++)
        {
            printf("%d\n",arr[i]);
        }
    }
}

void pop(){
    if(top==-1){
        printf("Stack underflow \n");
    }
    else{
        printf("%d has been popped \n",arr[top]);
        top--;
    }
}
int main(){
    int choice,num;
    while(1){
        printf("\n1.Push \n2.Pop \n3.Display \n4.Exit \n");
        printf(">>>>>>>");
        scanf("%d",&choice);

        switch(choice){
            case 1:
                push();
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;

            case 4:
                return 0;

            default:
                printf("Invalid Characters");

        }

    }
}
