#include<stdio.h>
void swapbalance(double *p1,double *p2)
{
    double temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
}
int main()
{
   double accbalance1,accbalance2;
   printf("Enter the balance of first account:");
   scanf("%lf",&accbalance1);
   printf("Enter the balance of second account:");
   scanf("%lf",&accbalance2);
   printf("\nBefore swapping balance of account 1:%lf",accbalance1);
   printf("\nBefore swapping balance of account 2:%lf",accbalance2);
   swapbalance(&accbalance1,&accbalance2);
   printf("\nAfter swapping balance of first account:%lf",accbalance1);
   printf("\nAfter swapping balance of second account:%lf",accbalance2);
   printf("\n24CE023_Desai Charmi.");


}
