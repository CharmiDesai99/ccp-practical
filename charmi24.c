#include<stdio.h>
struct Book
{
    char title[25];
    char Author[25];
    float amount;
};
void main()
{
    int i;
    struct Book b[3];
    for(i=0;i<3;i++)
    {
        printf("Enter Book information %d is",i+1);
        printf("\nEnter title of book:");
        fflush(stdin);
        gets(b[i].title);
        printf("\nEnter name of Author:");
        fflush(stdin);
        gets(b[i].Author);
        printf("\nEnter the amount of book:");
        fflush(stdin);
        scanf("%f",&b[i].amount);

    }
    for(i=0;i<3;i++)
    {
        printf("\nInformation of the book %d is\n",i+1);
        printf("\nName of the book:");
        puts(b[i].title);
        printf("\nName of the Author:");
        puts(b[i].Author);
        printf("\nAmount of the book is %f:",b[i].amount);
    }
    printf("\n24CE023 Desai Charmi.");
}
