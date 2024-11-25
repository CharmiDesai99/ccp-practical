#include<stdio.h>
void main()
{

    float a,b,add,sub,mul,div;
    char operation;
    printf("enter the value of Number 1:");
    scanf("%f",&a);
    printf("\nenter the value of Number 2:");
    scanf("%f",&b);
    printf("\nenter the operation:");
    scanf("%s",&operation);
    switch(operation)
    {
        case '+':
        add=a+b;
        printf("\nAddition of given numbers:%.2f ",add);
        break;


        case '-':
        sub=a-b;
        printf("\nSubtraction of given numbers  : %.2f", sub);
        break;


        case '*':
        mul=a*b;
        printf("\nMultiplication of given numbers: %.3f", mul);
        break;


        case '/':
        div=a/b;
        printf("\nDivision of given numbers: %.3f", div);
        break;

    default:
    printf("this is invalid operation :");
    }
    printf("\n24CE023__Desai Charmi.");
    }
