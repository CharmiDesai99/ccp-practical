#include<stdio.h>
void main()
{
    int *a;
    a=(char*)calloc(10,sizeof(char));
    printf("\nEnter the string:");
    gets(a);
    printf("\nThe string is:");
    puts(a);
    a=(char*)realloc(a,20*sizeof(char));
    printf("\nEnter the string:");
    gets(a);
    printf("\nString after reallocation of array:");
    puts(a);
    free(a);
    printf("\n24CE023_Desai Charmi.");
}
