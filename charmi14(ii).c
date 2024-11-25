#include <stdio.h>
void main()
{
    int rows=5;
    for(int i=1;i<=rows;i++)
{
    for(int j=1;j<=rows-i;j++) // Print leading spaces
    {
        printf(" ");
    }
    for(int j=1;j<=i;j++)// Print numbers
    {
            printf("%d",j);
    }
            printf("\n");
}
printf("\n24CE023__Desai Charmi.");
}

