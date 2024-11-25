#include<stdio.h>
void main()
{
    int vertically,horizontally,v,h;
    printf("enter the value of vertically table:");
    scanf("%d",&vertically);
    printf("\nenter the value of horizontally table:");
    scanf("%d",&horizontally);
    printf("\n multiplication table given below: %dx%d\n ",vertically,horizontally);
    for(h=1;h<=horizontally;h++)
       {
           for(v=1;v<=vertically;v++)
           {
               printf("\t %4d",h*v);

           }
           printf("\n");
       }
       printf("\n 24CE023 Charmi Desai.");
       return 0;
}


