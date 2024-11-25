#include<stdio.h>
void fibo(int);
void main()
{
    int n,n1;
    printf("Enter the number of month:");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("Invalid input");
    }
    else if(n==1)
    {
        printf("\nEnter saving of First month:");
        scanf("%d",n1);

    }
    else
    {
        fibo(n);

    }
    printf("\n24CE023 Desai Charmi.");
}
void fibo(int n)
{
    int n1,n2,nextamount,i;
    printf("\nEnter saving of First month:");
    scanf("%d",&n1);
    printf("\nEnter saving of Second month:");
    scanf("%d",&n2);
    printf("%d %d",n1,n2);
    for(i=2;i<n;i++)
    {
        nextamount=n1+n2;
        printf("  %d",nextamount);
        n1=n2;
        n2=nextamount;
    }
}

