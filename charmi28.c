#include<stdio.h>
int main()
{
    int marks[10];
    int fail=0,pass=0,distinction=0,firstclass=0;
    int *p1=marks;
    printf("Enter the 10 students marks:");
    for(int i=0;i<10;i++)
    {
        printf("\nStudent %d marks is:",i+1);
        scanf("%d",p1);
        p1++;
    }
    p1=marks;
    for(int i=0;i<10;i++)
    {
        if(*p1>=70)
        {
            distinction++;
        }
        else if(*p1>=60)
        {
            firstclass++;
        }
        else if(*p1>=40)
        {
            pass++;
        }
        else
        {
            fail++;
        }
        p1++;
    }
    printf("distinction: %d\n",distinction);
    printf("firstclass: %d\n",firstclass);
    printf("pass: %d\n",pass);
    printf("fail: %d\n",fail);
    printf("24CE023_Desai Charmi.");
}
