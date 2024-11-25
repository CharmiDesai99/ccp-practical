#include<stdio.h>
void main()
{
    int marks;
    printf("Enter the marks of the students:");
    scanf("%d",&marks);
    printf("your grade is :");
    (marks>=90)?printf("A"):(marks>=80&&marks<90)
    ?printf("B"):(marks>=70&&marks<80)
    ?printf("C"):(marks>=60&&marks<70)
    ?printf("D"):(marks>=0&&marks<60)?printf("F"):
    printf("\nInput is Invalis..Enter the marks between 1 to 100");
    printf("\n24CE023__Desai Charmi.");

}
