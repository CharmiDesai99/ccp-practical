#include<stdio.h>
//union of the book information
union library
{
    char accession_number[10];
    char title[20];
    char author[20];
    int price;
    int flag;
}l;
void main()
{
    //get each item from user and then print it
    printf("\nEnter accession number of book: ");
    gets(l.accession_number);
    printf("Given accession number is: ");
    puts(l.accession_number);
    printf("\nEnter title of the book: ");
    gets(l.title);
    printf("Given title is: ");
    puts(l.title);
    printf("\nEnter name of author of the book: ");
    gets(l.author);
    printf("Given auhtor name is: ");
    puts(l.author);
    printf("\nEnter price of the book: ");
    scanf("%d",&l.price);
    printf("Given price is: ");
    fflush(stdin);
    printf("%d",l.price);
    printf("\nEnter 0 if book is issued or 1 if book is not issued: ");
    fflush(stdin);
    scanf("%d",&l.flag);
    if(l.flag==0)
    {
        printf("Book issued");
    }
    else
    {
        printf("Not issued");
    }
printf("\n24CE023_Desai Charmi.");

}
