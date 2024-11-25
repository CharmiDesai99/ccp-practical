#include <stdio.h>
void introduction()
{
    printf("Welcome to CHARUSAT UNIVERSITY");
}
 int collect_num_stu()
 {
     int n;
     printf("\nEnter the number of student:");
     scanf("%d",&n);
     while(n<=0)
     {
         printf("\n Please.Enter the valid number");
         scanf("%d",&n);
     }
     return n;
 }
 void collect_and_display_grades(int n)
 {
     float grade;
     printf("\nEnter the grades of %d students:\n",n);
     for(int i=1;i<=n;i++)
     {
         printf("\nEnter the grade for students %d:",i);
         scanf("%f",&grade);
         printf("Grade of student %d is %f\n",i,grade);
     }
 }
 float cal_average(int n)
 {
     float grade,sum=0;
     for(int i=1;i<=n;i++)
     {
         printf("\nEnter the grade of %d students:",i);
         scanf("%f",&grade);
         sum+=grade;
     }
     return sum/n;
 }
 int main()
 {
     introduction();
     int n=collect_num_stu();
     collect_and_display_grades(n);
     float average=cal_average(n);
     printf("\nThe average grades of the students is %.2f",average);
     printf("\n24CE023__Desai Charmi.");
     return 0;
     }

