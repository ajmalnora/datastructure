#include<stdio.h>
#include<stdlib.h>

void Max(int num1, int num2, int num3){
    if(num1>num2){
        if(num1>num3){
            printf("The maximum number is %d\n", num1);
        }
        else{
            printf("The maximum number is %d\n", num3);
        }
    }
    else{
        if(num2>num3){
            printf("The maximum number is %d\n", num2);
        }
        else{
            printf("The maximum number is %d\n", num3);
        }
    }


}
int main(){
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    Max(a, b, c);
    
}