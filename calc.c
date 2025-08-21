#include<stdio.h>
#include<stdlib.h>
int End=1;
void main(){
    while(End){

    printf("Enter two numbers: ");
    double num1,num2;
    char op;
    scanf("%lf %lf",&num1, &num2);
    printf("Enter operation: ");
    scanf(" %c",&op);
    double result;

    switch(op){
        case'+':
        result=num1+num2;
        break;

        case'-':
        result=num1-num2;
        break;

        case'*':
        result=num1*num2;
        break;

        case'/':
        result=num1/num2;
        break;
        
        case'%':
        int mod=num1/num2;
        result=(num1/num2)-mod;
        break;

        
        default:
        printf("Wrong choice\n");

    }
    printf("%lf % c %lf = %lf \n" ,num1,op,num2,result);

    again:
    printf("Enter 'X' to exit or 'C' to continue\n");
    char yOn;
    scanf(" %c",&yOn);
    if(yOn=='X'|| yOn=='x')
    End=0;
    else if(yOn=='C' || yOn=='c')
     continue;
    
    else{
    printf("Wrong input\n");
    goto again;
    }
}

}